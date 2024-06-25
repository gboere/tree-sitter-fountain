/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fountain",

  rules: {
    document: $ => seq(
      optional($.title_page),
      repeat(choice($.boneyard, $.section, $.scene, $._element)),
    ),

    // Title Page
    title_page: $ => repeat1(
      $._title_element
    ),

    _title_element: $ =>
      /[\w ]+:.*((\n\t+|\n[ ]{2,}).*)*/,

    // Scene

    scene: $ => prec.right(seq(
      choice(
        /(INT|EXT|EST|INT.?\/EXT|I.?\/E).?.*\n\n/,
        /\..+\n\n/
      ),
      repeat1($._element)
    )),

    // Dialogue
    dialogue: $ => prec.right(repeat1(
      $.dialogue_block
    )),

    dialogue_block: $ => (seq(
      field('character', $.character),
      repeat1(choice($.speech, $.parenthetical)),
      '\n'
    )),

    character: $ => seq(
      /([A-Z. ]+|@.+)[ ]*(\(.+\))?\^?\n/,
    ),

    parenthetical: $ => prec(2, /\(.*\)\n/),
    speech: $ => prec(1, /.*\n/),


    // misc.
    action: $ => prec(-1,
      repeat1(choice(
        /!.+/,
        $._line
      ))
    ),

    transition: $ =>
      choice(
        /[A-Z ]+ TO:\n\n/,
        />.+[^<]\n\n/
      ),

    break: $ => /={3,}\n/,

    synope: $ => /=.+\n/,

    section: $ => prec.left(seq(
      /#{1,}.+\n/,
      repeat(
        choice($.scene, $._element)
      )
    )),

    note: $ => /\[\[.+\]\]\n/,

    boneyard: $ => prec(10,
      /\/\*(.|\n)*\*\//
    ),

    _line: $ => /[^\n]+/,

    _element: $ => prec.left(choice(
      $.action,
      $.dialogue,
      $.transition,
      $.synope,
      $.break,
      $.note
    ))

  }
});
