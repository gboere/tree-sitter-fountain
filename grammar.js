/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fountain",
  conflicts: $ => [
    [$.dialogue_block]
  ],

  rules: {
    document: $ => repeat($._element),

    _element: $ => choice(
      $.scene_heading,
      $.dialogue_block,
      $.action,
      $.transition,
      $.section_heading,
      $.note
    ),

    scene_heading: $ => seq(
      choice(
        'INT.',
        'EXT.',
        'INT./EXT.',
        'EST.'
      ),
      optional($.description),
      '\n'
    ),

    character: $ => seq(
      /[A-Z][A-Z ]*[A-Z]/,
      '\n'
    ),

    dialogue_block: $ => seq(
      $.character,
      repeat1(choice($.dialogue, $.parenthetical))
    ),

    dialogue: $ => seq(
      $.line,
      '\n'
    ),

    parenthetical: $ => seq(
      '(',
      /[^)]+/,
      ')',
      '\n'
    ),

    action: $ => seq(
      $.line,
      '\n'
    ),

    transition: $ => seq(
      /[A-Z ]+:/,
      '\n'
    ),

    section_heading: $ => seq(
      repeat1('#'),
      optional($.description),
      '\n'
    ),

    note: $ => seq(
      '[[',
      /[^]]+/,
      ']]',
      '\n'
    ),

    line: $ => /[^\n]+/,

    description: $ => /[^\n]+/
  }
});
