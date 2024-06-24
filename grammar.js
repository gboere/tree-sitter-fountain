/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fountain",
  conflicts: $ => [
    [$.dialogue_block]
  ],

  rules: {
    document: $ => seq(
      optional($.title_page),
      repeat($._element),
    ),

    title_page: $ => repeat1(
      $._title_element
    ),

    _title_element: $ => choice(
      /[\w ]+:[^:\n].*\n/,
      /[\w ]+:(\n[ \t]{2,}.+)+/
    ),

    action_block: $ => prec.right(
      repeat1($._line)
    ),

    character: $ => seq(
      choice(
        /[A-Z]+([ ]*\(.+\))?/,
        /@[A-Za-z]+([ ]*\(.+\))?/,
      ),
      '\n'
    ),

    dialogue_block: $ => repeat1(
      $.dialogue
    ),

    dialogue: $ => (seq(
      field('character', $.character),
      repeat1(choice($.speech, $.parenthetical)),
      '\n'
    )),

    parenthetical: $ => prec(2, /\(.*\)\n/),
    speech: $ => prec(1, /.*\n/),

    _line_break: $ => /\n\n/,

    _line: $ => /[^\n]+/,

    _element: $ => choice(
      $.action_block,
      $.dialogue_block
    )

  }
});
