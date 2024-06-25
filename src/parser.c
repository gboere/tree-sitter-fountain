#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__title_element = 1,
  aux_sym_scene_token1 = 2,
  aux_sym_scene_token2 = 3,
  anon_sym_LF = 4,
  aux_sym_character_token1 = 5,
  aux_sym_parenthetical_token1 = 6,
  aux_sym_speech_token1 = 7,
  aux_sym_action_token1 = 8,
  aux_sym_transition_token1 = 9,
  aux_sym_transition_token2 = 10,
  sym_break = 11,
  sym_synope = 12,
  aux_sym_section_token1 = 13,
  sym_note = 14,
  aux_sym_boneyard_token1 = 15,
  sym__line = 16,
  sym_document = 17,
  sym_title_page = 18,
  sym_scene = 19,
  sym_dialogue = 20,
  sym_dialogue_block = 21,
  sym_character = 22,
  sym_parenthetical = 23,
  sym_speech = 24,
  sym_action = 25,
  sym_transition = 26,
  sym_section = 27,
  sym_boneyard = 28,
  sym__element = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_title_page_repeat1 = 31,
  aux_sym_scene_repeat1 = 32,
  aux_sym_dialogue_repeat1 = 33,
  aux_sym_dialogue_block_repeat1 = 34,
  aux_sym_action_repeat1 = 35,
  aux_sym_section_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__title_element] = "_title_element",
  [aux_sym_scene_token1] = "scene_token1",
  [aux_sym_scene_token2] = "scene_token2",
  [anon_sym_LF] = "\n",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [aux_sym_speech_token1] = "speech_token1",
  [aux_sym_action_token1] = "action_token1",
  [aux_sym_transition_token1] = "transition_token1",
  [aux_sym_transition_token2] = "transition_token2",
  [sym_break] = "break",
  [sym_synope] = "synope",
  [aux_sym_section_token1] = "section_token1",
  [sym_note] = "note",
  [aux_sym_boneyard_token1] = "boneyard_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_title_page] = "title_page",
  [sym_scene] = "scene",
  [sym_dialogue] = "dialogue",
  [sym_dialogue_block] = "dialogue_block",
  [sym_character] = "character",
  [sym_parenthetical] = "parenthetical",
  [sym_speech] = "speech",
  [sym_action] = "action",
  [sym_transition] = "transition",
  [sym_section] = "section",
  [sym_boneyard] = "boneyard",
  [sym__element] = "_element",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_title_page_repeat1] = "title_page_repeat1",
  [aux_sym_scene_repeat1] = "scene_repeat1",
  [aux_sym_dialogue_repeat1] = "dialogue_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__title_element] = sym__title_element,
  [aux_sym_scene_token1] = aux_sym_scene_token1,
  [aux_sym_scene_token2] = aux_sym_scene_token2,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [aux_sym_speech_token1] = aux_sym_speech_token1,
  [aux_sym_action_token1] = aux_sym_action_token1,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [aux_sym_transition_token2] = aux_sym_transition_token2,
  [sym_break] = sym_break,
  [sym_synope] = sym_synope,
  [aux_sym_section_token1] = aux_sym_section_token1,
  [sym_note] = sym_note,
  [aux_sym_boneyard_token1] = aux_sym_boneyard_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_title_page] = sym_title_page,
  [sym_scene] = sym_scene,
  [sym_dialogue] = sym_dialogue,
  [sym_dialogue_block] = sym_dialogue_block,
  [sym_character] = sym_character,
  [sym_parenthetical] = sym_parenthetical,
  [sym_speech] = sym_speech,
  [sym_action] = sym_action,
  [sym_transition] = sym_transition,
  [sym_section] = sym_section,
  [sym_boneyard] = sym_boneyard,
  [sym__element] = sym__element,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_title_page_repeat1] = aux_sym_title_page_repeat1,
  [aux_sym_scene_repeat1] = aux_sym_scene_repeat1,
  [aux_sym_dialogue_repeat1] = aux_sym_dialogue_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__title_element] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_scene_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scene_token2] = {
    .visible = false,
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
  [aux_sym_parenthetical_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_speech_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transition_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_synope] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_boneyard_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_title_page] = {
    .visible = true,
    .named = true,
  },
  [sym_scene] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue_block] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_speech] = {
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
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_boneyard] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_page_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scene_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_character = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_character] = "character",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_character, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        ' ', 41,
        '!', 66,
        '#', 67,
        '(', 53,
        '.', 70,
        '/', 54,
        '=', 61,
        '>', 68,
        'E', 47,
        'I', 52,
        '[', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(209);
      if (lookahead == '@') ADVANCE(210);
      if (lookahead == '[') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '(') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'X') ADVANCE(36);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        ' ', 41,
        '!', 66,
        '#', 67,
        '(', 53,
        '.', 70,
        '/', 54,
        '=', 61,
        '>', 68,
        'E', 47,
        'I', 52,
        '[', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        ' ', 40,
        '!', 66,
        '#', 67,
        '(', 53,
        '.', 70,
        '/', 54,
        ':', 77,
        '=', 61,
        '>', 68,
        'E', 47,
        'I', 52,
        'T', 46,
        '[', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        ' ', 40,
        '!', 66,
        '#', 67,
        '(', 53,
        '.', 70,
        '/', 54,
        ':', 77,
        '=', 61,
        '>', 68,
        'E', 47,
        'I', 52,
        '[', 63,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'X') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ':') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ':') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == '[') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') SKIP(71);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(209);
      if (lookahead == '@') ADVANCE(210);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == '[') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') SKIP(72);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(209);
      if (lookahead == '@') ADVANCE(210);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == '[') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'X') ADVANCE(80);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_scene_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_scene_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '@') ADVANCE(210);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '@') ADVANCE(210);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '@') ADVANCE(210);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_action_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_synope);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 90,
        ' ', 116,
        '!', 208,
        '#', 213,
        '(', 211,
        '.', 141,
        '/', 197,
        ':', 77,
        '=', 203,
        '>', 209,
        '@', 210,
        'E', 123,
        'I', 128,
        'T', 122,
        '[', 205,
        '^', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 90,
        ' ', 116,
        '!', 208,
        '#', 213,
        '(', 211,
        '.', 141,
        '/', 197,
        ':', 77,
        '=', 203,
        '>', 209,
        '@', 210,
        'E', 123,
        'I', 128,
        '[', 205,
        '^', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == '^') ADVANCE(118);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 124,
        '(', 211,
        '.', 143,
        '/', 204,
        ':', 77,
        'T', 122,
        '^', 147,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 124,
        '(', 211,
        '.', 143,
        '/', 204,
        ':', 77,
        'T', 162,
        '^', 147,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(127);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 124,
        '(', 211,
        '.', 143,
        ':', 77,
        'S', 125,
        'X', 125,
        '^', 147,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 119,
        '(', 201,
        '.', 142,
        '/', 199,
        ':', 75,
        'N', 120,
        '^', 146,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'S') ADVANCE(138);
      if (lookahead == 'X') ADVANCE(138);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead == '^') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '^') ADVANCE(147);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '^') ADVANCE(147);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 92,
        ' ', 152,
        '!', 208,
        '(', 211,
        '.', 143,
        '=', 203,
        '>', 209,
        '@', 210,
        'T', 135,
        '[', 205,
        '^', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 92,
        ' ', 152,
        '!', 208,
        '(', 211,
        '.', 143,
        '=', 203,
        '>', 209,
        '@', 210,
        '[', 205,
        '^', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 155,
        '!', 208,
        '#', 213,
        '(', 211,
        '.', 141,
        '/', 197,
        '=', 203,
        '>', 209,
        '@', 210,
        'E', 136,
        'I', 140,
        'T', 135,
        '[', 205,
        '^', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 155,
        '!', 208,
        '#', 213,
        '(', 211,
        '.', 141,
        '/', 197,
        '=', 203,
        '>', 209,
        '@', 210,
        'E', 136,
        'I', 140,
        '[', 205,
        '^', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 89,
        ' ', 160,
        '(', 189,
        '.', 171,
        '/', 186,
        ':', 82,
        'T', 159,
        '^', 175,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '^') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(165);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == '(') ADVANCE(184);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '^') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '^') ADVANCE(175);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == '^') ADVANCE(175);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == '^') ADVANCE(173);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == 'X') ADVANCE(178);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'X') ADVANCE(187);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 117,
        '!', 208,
        '#', 213,
        '.', 141,
        '/', 197,
        '=', 203,
        '>', 209,
        '@', 210,
        'E', 123,
        'I', 128,
        '[', 205,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 156,
        '!', 208,
        '#', 213,
        '.', 141,
        '/', 197,
        '=', 203,
        '>', 209,
        '@', 210,
        'E', 136,
        'I', 140,
        '[', 205,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(209);
      if (lookahead == '@') ADVANCE(210);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == 'E') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'E') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__title_element] = ACTIONS(1),
    [aux_sym_scene_token1] = ACTIONS(1),
    [aux_sym_scene_token2] = ACTIONS(1),
    [aux_sym_parenthetical_token1] = ACTIONS(1),
    [aux_sym_action_token1] = ACTIONS(1),
    [aux_sym_transition_token1] = ACTIONS(1),
    [aux_sym_transition_token2] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_synope] = ACTIONS(1),
    [aux_sym_section_token1] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [aux_sym_boneyard_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(27),
    [sym_title_page] = STATE(2),
    [sym_scene] = STATE(4),
    [sym_dialogue] = STATE(4),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(4),
    [sym_transition] = STATE(4),
    [sym_section] = STATE(4),
    [sym_boneyard] = STATE(4),
    [sym__element] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_title_page_repeat1] = STATE(15),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__title_element] = ACTIONS(5),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(15),
    [sym_synope] = ACTIONS(15),
    [aux_sym_section_token1] = ACTIONS(17),
    [sym_note] = ACTIONS(15),
    [aux_sym_boneyard_token1] = ACTIONS(19),
    [sym__line] = ACTIONS(11),
  },
  [2] = {
    [sym_scene] = STATE(5),
    [sym_dialogue] = STATE(5),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_section] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym__element] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(23),
    [sym_synope] = ACTIONS(23),
    [aux_sym_section_token1] = ACTIONS(17),
    [sym_note] = ACTIONS(23),
    [aux_sym_boneyard_token1] = ACTIONS(19),
    [sym__line] = ACTIONS(11),
  },
  [3] = {
    [sym_scene] = STATE(3),
    [sym_dialogue] = STATE(3),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym__element] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_scene_token1] = ACTIONS(27),
    [aux_sym_scene_token2] = ACTIONS(27),
    [aux_sym_character_token1] = ACTIONS(30),
    [aux_sym_action_token1] = ACTIONS(33),
    [aux_sym_transition_token1] = ACTIONS(36),
    [aux_sym_transition_token2] = ACTIONS(36),
    [sym_break] = ACTIONS(39),
    [sym_synope] = ACTIONS(39),
    [aux_sym_section_token1] = ACTIONS(42),
    [sym_note] = ACTIONS(39),
    [aux_sym_boneyard_token1] = ACTIONS(45),
    [sym__line] = ACTIONS(33),
  },
  [4] = {
    [sym_scene] = STATE(3),
    [sym_dialogue] = STATE(3),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym__element] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(48),
    [sym_synope] = ACTIONS(48),
    [aux_sym_section_token1] = ACTIONS(17),
    [sym_note] = ACTIONS(48),
    [aux_sym_boneyard_token1] = ACTIONS(19),
    [sym__line] = ACTIONS(11),
  },
  [5] = {
    [sym_scene] = STATE(3),
    [sym_dialogue] = STATE(3),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym__element] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(48),
    [sym_synope] = ACTIONS(48),
    [aux_sym_section_token1] = ACTIONS(17),
    [sym_note] = ACTIONS(48),
    [aux_sym_boneyard_token1] = ACTIONS(19),
    [sym__line] = ACTIONS(11),
  },
  [6] = {
    [sym_scene] = STATE(6),
    [sym_dialogue] = STATE(6),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(6),
    [sym_transition] = STATE(6),
    [sym__element] = STATE(6),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [aux_sym_section_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_scene_token1] = ACTIONS(54),
    [aux_sym_scene_token2] = ACTIONS(54),
    [aux_sym_character_token1] = ACTIONS(57),
    [aux_sym_action_token1] = ACTIONS(60),
    [aux_sym_transition_token1] = ACTIONS(63),
    [aux_sym_transition_token2] = ACTIONS(63),
    [sym_break] = ACTIONS(66),
    [sym_synope] = ACTIONS(66),
    [aux_sym_section_token1] = ACTIONS(69),
    [sym_note] = ACTIONS(66),
    [aux_sym_boneyard_token1] = ACTIONS(69),
    [sym__line] = ACTIONS(60),
  },
  [7] = {
    [sym_scene] = STATE(8),
    [sym_dialogue] = STATE(8),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(8),
    [sym_transition] = STATE(8),
    [sym__element] = STATE(8),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [aux_sym_section_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_scene_token1] = ACTIONS(73),
    [aux_sym_scene_token2] = ACTIONS(73),
    [aux_sym_character_token1] = ACTIONS(73),
    [aux_sym_action_token1] = ACTIONS(73),
    [aux_sym_transition_token1] = ACTIONS(73),
    [aux_sym_transition_token2] = ACTIONS(73),
    [sym_break] = ACTIONS(73),
    [sym_synope] = ACTIONS(73),
    [aux_sym_section_token1] = ACTIONS(73),
    [sym_note] = ACTIONS(73),
    [aux_sym_boneyard_token1] = ACTIONS(73),
    [sym__line] = ACTIONS(73),
  },
  [8] = {
    [sym_scene] = STATE(6),
    [sym_dialogue] = STATE(6),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(6),
    [sym_transition] = STATE(6),
    [sym__element] = STATE(6),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [aux_sym_section_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_scene_token1] = ACTIONS(77),
    [aux_sym_scene_token2] = ACTIONS(77),
    [aux_sym_character_token1] = ACTIONS(77),
    [aux_sym_action_token1] = ACTIONS(77),
    [aux_sym_transition_token1] = ACTIONS(77),
    [aux_sym_transition_token2] = ACTIONS(77),
    [sym_break] = ACTIONS(77),
    [sym_synope] = ACTIONS(77),
    [aux_sym_section_token1] = ACTIONS(77),
    [sym_note] = ACTIONS(77),
    [aux_sym_boneyard_token1] = ACTIONS(77),
    [sym__line] = ACTIONS(77),
  },
  [9] = {
    [sym_dialogue] = STATE(10),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(10),
    [sym_transition] = STATE(10),
    [sym__element] = STATE(10),
    [aux_sym_scene_repeat1] = STATE(10),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_scene_token1] = ACTIONS(81),
    [aux_sym_scene_token2] = ACTIONS(81),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(83),
    [sym_synope] = ACTIONS(83),
    [aux_sym_section_token1] = ACTIONS(81),
    [sym_note] = ACTIONS(83),
    [aux_sym_boneyard_token1] = ACTIONS(81),
    [sym__line] = ACTIONS(11),
  },
  [10] = {
    [sym_dialogue] = STATE(10),
    [sym_dialogue_block] = STATE(13),
    [sym_character] = STATE(23),
    [sym_action] = STATE(10),
    [sym_transition] = STATE(10),
    [sym__element] = STATE(10),
    [aux_sym_scene_repeat1] = STATE(10),
    [aux_sym_dialogue_repeat1] = STATE(13),
    [aux_sym_action_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_scene_token1] = ACTIONS(87),
    [aux_sym_scene_token2] = ACTIONS(87),
    [aux_sym_character_token1] = ACTIONS(89),
    [aux_sym_action_token1] = ACTIONS(92),
    [aux_sym_transition_token1] = ACTIONS(95),
    [aux_sym_transition_token2] = ACTIONS(95),
    [sym_break] = ACTIONS(98),
    [sym_synope] = ACTIONS(98),
    [aux_sym_section_token1] = ACTIONS(87),
    [sym_note] = ACTIONS(98),
    [aux_sym_boneyard_token1] = ACTIONS(87),
    [sym__line] = ACTIONS(92),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    STATE(16), 1,
      aux_sym_action_repeat1,
    STATE(23), 1,
      sym_character,
    ACTIONS(11), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(13), 2,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
    STATE(13), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(101), 3,
      sym_break,
      sym_synope,
      sym_note,
    STATE(9), 5,
      sym_dialogue,
      sym_action,
      sym_transition,
      sym__element,
      aux_sym_scene_repeat1,
  [34] = 5,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      aux_sym_character_token1,
    STATE(23), 1,
      sym_character,
    STATE(12), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(105), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [61] = 5,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_character,
    STATE(12), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(112), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [88] = 4,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym__title_element,
    STATE(14), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(119), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [112] = 4,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym__title_element,
    STATE(14), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(125), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [136] = 4,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_action_repeat1,
    ACTIONS(131), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(129), 10,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
  [159] = 4,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_action_repeat1,
    ACTIONS(137), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(135), 10,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
  [182] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [200] = 2,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [218] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [236] = 4,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(156), 1,
      aux_sym_speech_token1,
    STATE(22), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [251] = 4,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(160), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(163), 1,
      aux_sym_speech_token1,
    STATE(22), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [266] = 3,
    ACTIONS(154), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(156), 1,
      aux_sym_speech_token1,
    STATE(21), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [278] = 1,
    ACTIONS(166), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [284] = 1,
    ACTIONS(168), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [290] = 1,
    ACTIONS(170), 2,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [295] = 1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 34,
  [SMALL_STATE(13)] = 61,
  [SMALL_STATE(14)] = 88,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 159,
  [SMALL_STATE(18)] = 182,
  [SMALL_STATE(19)] = 200,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 251,
  [SMALL_STATE(23)] = 266,
  [SMALL_STATE(24)] = 278,
  [SMALL_STATE(25)] = 284,
  [SMALL_STATE(26)] = 290,
  [SMALL_STATE(27)] = 295,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_speech, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
