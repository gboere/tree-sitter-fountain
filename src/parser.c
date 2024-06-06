#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_INT_DOT = 1,
  anon_sym_EXT_DOT = 2,
  anon_sym_INT_DOT_SLASHEXT_DOT = 3,
  anon_sym_EST_DOT = 4,
  anon_sym_LF = 5,
  aux_sym_character_token1 = 6,
  anon_sym_LPAREN = 7,
  aux_sym_parenthetical_token1 = 8,
  anon_sym_RPAREN = 9,
  aux_sym_transition_token1 = 10,
  anon_sym_POUND = 11,
  anon_sym_LBRACK_LBRACK = 12,
  aux_sym_note_token1 = 13,
  anon_sym_RBRACK_RBRACK = 14,
  aux_sym_line_token1 = 15,
  sym_document = 16,
  sym__element = 17,
  sym_scene_heading = 18,
  sym_character = 19,
  sym_dialogue_block = 20,
  sym_dialogue = 21,
  sym_parenthetical = 22,
  sym_action = 23,
  sym_transition = 24,
  sym_section_heading = 25,
  sym_note = 26,
  sym_line = 27,
  sym_description = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_dialogue_block_repeat1 = 30,
  aux_sym_section_heading_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_INT_DOT] = "INT.",
  [anon_sym_EXT_DOT] = "EXT.",
  [anon_sym_INT_DOT_SLASHEXT_DOT] = "INT./EXT.",
  [anon_sym_EST_DOT] = "EST.",
  [anon_sym_LF] = "\n",
  [aux_sym_character_token1] = "character_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [aux_sym_transition_token1] = "transition_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [aux_sym_line_token1] = "line_token1",
  [sym_document] = "document",
  [sym__element] = "_element",
  [sym_scene_heading] = "scene_heading",
  [sym_character] = "character",
  [sym_dialogue_block] = "dialogue_block",
  [sym_dialogue] = "dialogue",
  [sym_parenthetical] = "parenthetical",
  [sym_action] = "action",
  [sym_transition] = "transition",
  [sym_section_heading] = "section_heading",
  [sym_note] = "note",
  [sym_line] = "line",
  [sym_description] = "description",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
  [aux_sym_section_heading_repeat1] = "section_heading_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_INT_DOT] = anon_sym_INT_DOT,
  [anon_sym_EXT_DOT] = anon_sym_EXT_DOT,
  [anon_sym_INT_DOT_SLASHEXT_DOT] = anon_sym_INT_DOT_SLASHEXT_DOT,
  [anon_sym_EST_DOT] = anon_sym_EST_DOT,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [sym_document] = sym_document,
  [sym__element] = sym__element,
  [sym_scene_heading] = sym_scene_heading,
  [sym_character] = sym_character,
  [sym_dialogue_block] = sym_dialogue_block,
  [sym_dialogue] = sym_dialogue,
  [sym_parenthetical] = sym_parenthetical,
  [sym_action] = sym_action,
  [sym_transition] = sym_transition,
  [sym_section_heading] = sym_section_heading,
  [sym_note] = sym_note,
  [sym_line] = sym_line,
  [sym_description] = sym_description,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
  [aux_sym_section_heading_repeat1] = aux_sym_section_heading_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_INT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INT_DOT_SLASHEXT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EST_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parenthetical_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_transition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_scene_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue_block] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_transition] = {
    .visible = true,
    .named = true,
  },
  [sym_section_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        ' ', 5,
        '#', 53,
        '(', 46,
        ')', 50,
        'E', 8,
        'I', 7,
        '[', 14,
        ']', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        ' ', 5,
        '#', 53,
        '(', 46,
        ')', 50,
        ':', 51,
        'E', 8,
        'I', 7,
        '[', 14,
        ']', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        ' ', 5,
        '#', 53,
        '(', 46,
        ')', 50,
        'E', 8,
        'I', 7,
        '[', 14,
        ']', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'X') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'X') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(59);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(49);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == '[') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') SKIP(19);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == '[') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_INT_DOT);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_INT_DOT);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EXT_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EXT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_INT_DOT_SLASHEXT_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_INT_DOT_SLASHEXT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EST_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EST_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ':') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == 'X') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'X') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_INT_DOT] = ACTIONS(1),
    [anon_sym_EXT_DOT] = ACTIONS(1),
    [anon_sym_INT_DOT_SLASHEXT_DOT] = ACTIONS(1),
    [anon_sym_EST_DOT] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_transition_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(29),
    [sym__element] = STATE(2),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(15),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(2),
    [sym_note] = STATE(2),
    [sym_line] = STATE(26),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_section_heading_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_INT_DOT] = ACTIONS(5),
    [anon_sym_EXT_DOT] = ACTIONS(5),
    [anon_sym_INT_DOT_SLASHEXT_DOT] = ACTIONS(5),
    [anon_sym_EST_DOT] = ACTIONS(5),
    [aux_sym_character_token1] = ACTIONS(7),
    [aux_sym_transition_token1] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
    [aux_sym_line_token1] = ACTIONS(15),
  },
  [2] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(15),
    [sym_dialogue_block] = STATE(3),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_note] = STATE(3),
    [sym_line] = STATE(26),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_section_heading_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_INT_DOT] = ACTIONS(5),
    [anon_sym_EXT_DOT] = ACTIONS(5),
    [anon_sym_INT_DOT_SLASHEXT_DOT] = ACTIONS(5),
    [anon_sym_EST_DOT] = ACTIONS(5),
    [aux_sym_character_token1] = ACTIONS(7),
    [aux_sym_transition_token1] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
    [aux_sym_line_token1] = ACTIONS(15),
  },
  [3] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(15),
    [sym_dialogue_block] = STATE(3),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_note] = STATE(3),
    [sym_line] = STATE(26),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_section_heading_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_INT_DOT] = ACTIONS(21),
    [anon_sym_EXT_DOT] = ACTIONS(21),
    [anon_sym_INT_DOT_SLASHEXT_DOT] = ACTIONS(21),
    [anon_sym_EST_DOT] = ACTIONS(21),
    [aux_sym_character_token1] = ACTIONS(24),
    [aux_sym_transition_token1] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(30),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(33),
    [aux_sym_line_token1] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      aux_sym_line_token1,
    STATE(22), 1,
      sym_line,
    STATE(4), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(41), 8,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
  [28] = 6,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_line_token1,
    STATE(22), 1,
      sym_line,
    STATE(4), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(51), 8,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
  [56] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 10,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      anon_sym_LPAREN,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [72] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 10,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      anon_sym_LPAREN,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [88] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 9,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [103] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 9,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [118] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 9,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [133] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 9,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [148] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 9,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [163] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 9,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [178] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 9,
      anon_sym_INT_DOT,
      anon_sym_EXT_DOT,
      anon_sym_INT_DOT_SLASHEXT_DOT,
      anon_sym_EST_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      aux_sym_line_token1,
  [193] = 4,
    ACTIONS(15), 1,
      aux_sym_line_token1,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_line,
    STATE(5), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
  [208] = 5,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(96), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      aux_sym_line_token1,
    STATE(17), 1,
      aux_sym_section_heading_repeat1,
    STATE(25), 1,
      sym_description,
  [224] = 3,
    ACTIONS(102), 1,
      anon_sym_POUND,
    STATE(17), 1,
      aux_sym_section_heading_repeat1,
    ACTIONS(100), 2,
      anon_sym_LF,
      aux_sym_line_token1,
  [235] = 3,
    ACTIONS(98), 1,
      aux_sym_line_token1,
    ACTIONS(105), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_description,
  [245] = 1,
    ACTIONS(107), 2,
      anon_sym_LPAREN,
      aux_sym_line_token1,
  [250] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACK_RBRACK,
  [254] = 1,
    ACTIONS(111), 1,
      aux_sym_parenthetical_token1,
  [258] = 1,
    ACTIONS(113), 1,
      anon_sym_LF,
  [262] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [266] = 1,
    ACTIONS(117), 1,
      anon_sym_LF,
  [270] = 1,
    ACTIONS(119), 1,
      anon_sym_LF,
  [274] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
  [278] = 1,
    ACTIONS(123), 1,
      anon_sym_LF,
  [282] = 1,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
  [286] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [290] = 1,
    ACTIONS(129), 1,
      anon_sym_LF,
  [294] = 1,
    ACTIONS(131), 1,
      aux_sym_note_token1,
  [298] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [302] = 1,
    ACTIONS(135), 1,
      anon_sym_LF,
  [306] = 1,
    ACTIONS(137), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 208,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 245,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 258,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 266,
  [SMALL_STATE(25)] = 270,
  [SMALL_STATE(26)] = 274,
  [SMALL_STATE(27)] = 278,
  [SMALL_STATE(28)] = 282,
  [SMALL_STATE(29)] = 286,
  [SMALL_STATE(30)] = 290,
  [SMALL_STATE(31)] = 294,
  [SMALL_STATE(32)] = 298,
  [SMALL_STATE(33)] = 302,
  [SMALL_STATE(34)] = 306,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0), SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_heading_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fountain(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
