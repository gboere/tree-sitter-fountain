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

      '\n'
    ),

    ),


      '\n'



    _line: $ => /[^\n]+/,

    _element: $ => choice(
      $.action_block,
      $.dialogue_block
    )
  }
});
