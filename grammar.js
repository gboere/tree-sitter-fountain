/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fountain",
  conflicts: $ => [
    [$.dialogue]
  ],

  rules: {
    document: $ => seq(
      optional($.title_page),
      repeat($._element),
    ),

    // Title Page
    title_page: $ => repeat1(
      $._title_element
    ),

    _title_element: $ => choice(
      /[\w ]+:[^:\n].*\n/,
      /[\w ]+:(\n[ \t]{2,}.+)+/
    ),

    // Dialogue
    dialogue: $ => repeat1(
      $.dialogue_block
    ),

    dialogue_block: $ => (seq(
      field('character', $.character),
      repeat1(choice($.speech, $.parenthetical)),
      '\n'
    )),

    character: $ => seq(
      choice(
        /[A-Z]+([ ]*\(.+\))?/,
        /@[A-Za-z]+([ ]*\(.+\))?/,
      ),
      '\n'
    ),

    parenthetical: $ => prec(2, /\(.*\)\n/),
    speech: $ => prec(1, /.*\n/),


    // misc.
    action: $ => prec.right(
      repeat1($._line)
    ),

    _line_break: $ => /\n\n/,

    _line: $ => /[^\n]+/,

    _element: $ => choice(
      $.action,
      $.dialogue
    )

  }
});
