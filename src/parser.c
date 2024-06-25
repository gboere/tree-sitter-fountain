#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  sym_transition = 9,
  sym_break = 10,
  sym_synope = 11,
  aux_sym_section_token1 = 12,
  sym_note = 13,
  aux_sym_boneyard_token1 = 14,
  sym__line = 15,
  sym_document = 16,
  sym_title_page = 17,
  sym_scene = 18,
  sym_dialogue = 19,
  sym_dialogue_block = 20,
  sym_character = 21,
  sym_parenthetical = 22,
  sym_speech = 23,
  sym_action = 24,
  sym_section = 25,
  sym_boneyard = 26,
  sym__element = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_title_page_repeat1 = 29,
  aux_sym_scene_repeat1 = 30,
  aux_sym_dialogue_repeat1 = 31,
  aux_sym_dialogue_block_repeat1 = 32,
  aux_sym_action_repeat1 = 33,
  aux_sym_section_repeat1 = 34,
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
  [sym_transition] = "transition",
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
  [sym_transition] = sym_transition,
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
  [sym_transition] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      ADVANCE_MAP(
        ' ', 40,
        '!', 65,
        '#', 66,
        '(', 52,
        '.', 69,
        '/', 53,
        '=', 60,
        '>', 67,
        'E', 46,
        'I', 51,
        '[', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(73);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(73);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == '[') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '(') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '(') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == ':') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'X') ADVANCE(35);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        ' ', 40,
        '!', 65,
        '#', 66,
        '(', 52,
        '.', 69,
        '/', 53,
        '=', 60,
        '>', 67,
        'E', 46,
        'I', 51,
        '[', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        ' ', 39,
        '!', 65,
        '#', 66,
        '(', 52,
        '.', 69,
        '/', 53,
        ':', 76,
        '=', 60,
        '>', 67,
        'E', 46,
        'I', 51,
        'T', 45,
        '[', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        ' ', 39,
        '!', 65,
        '#', 66,
        '(', 52,
        '.', 69,
        '/', 53,
        ':', 76,
        '=', 60,
        '>', 67,
        'E', 46,
        'I', 51,
        '[', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'X') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ':') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == '[') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(70);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == '[') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(71);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == '[') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\t') ADVANCE(73);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'X') ADVANCE(79);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_scene_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_scene_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '\n') ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '(') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_action_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_transition);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_transition);
      if (lookahead == '\n') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_synope);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 89,
        ' ', 114,
        '!', 206,
        '#', 211,
        '(', 209,
        '.', 139,
        '/', 195,
        ':', 76,
        '=', 201,
        '>', 207,
        '@', 208,
        'E', 121,
        'I', 126,
        'T', 120,
        '[', 203,
        '^', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 89,
        ' ', 114,
        '!', 206,
        '#', 211,
        '(', 209,
        '.', 139,
        '/', 195,
        ':', 76,
        '=', 201,
        '>', 207,
        '@', 208,
        'E', 121,
        'I', 126,
        '[', 203,
        '^', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '^') ADVANCE(116);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 86,
        ' ', 122,
        '(', 209,
        '.', 141,
        '/', 202,
        ':', 76,
        'T', 120,
        '^', 145,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 86,
        ' ', 122,
        '(', 209,
        '.', 141,
        '/', 202,
        ':', 76,
        'T', 160,
        '^', 145,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 86,
        ' ', 122,
        '(', 209,
        '.', 141,
        ':', 76,
        'S', 123,
        'X', 123,
        '^', 145,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 86,
        ' ', 117,
        '(', 199,
        '.', 140,
        '/', 197,
        ':', 74,
        'N', 118,
        '^', 144,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(133);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'S') ADVANCE(136);
      if (lookahead == 'X') ADVANCE(136);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(133);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '^') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'N') ADVANCE(130);
      if (lookahead == '^') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '^') ADVANCE(149);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '^') ADVANCE(145);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '^') ADVANCE(143);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '^') ADVANCE(149);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 150,
        '!', 206,
        '(', 209,
        '.', 141,
        '=', 201,
        '>', 207,
        '@', 208,
        'T', 133,
        '[', 203,
        '^', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 150,
        '!', 206,
        '(', 209,
        '.', 141,
        '=', 201,
        '>', 207,
        '@', 208,
        '[', 203,
        '^', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 90,
        ' ', 153,
        '!', 206,
        '#', 211,
        '(', 209,
        '.', 139,
        '/', 195,
        '=', 201,
        '>', 207,
        '@', 208,
        'E', 134,
        'I', 138,
        'T', 133,
        '[', 203,
        '^', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 90,
        ' ', 153,
        '!', 206,
        '#', 211,
        '(', 209,
        '.', 139,
        '/', 195,
        '=', 201,
        '>', 207,
        '@', 208,
        'E', 134,
        'I', 138,
        '[', 203,
        '^', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 88,
        ' ', 158,
        '(', 188,
        '.', 169,
        '/', 185,
        ':', 81,
        'T', 157,
        '^', 173,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(155);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '^') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '^') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '^') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '^') ADVANCE(173);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '^') ADVANCE(173);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == 'T') ADVANCE(179);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == 'X') ADVANCE(177);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == 'X') ADVANCE(186);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 115,
        '!', 206,
        '#', 211,
        '.', 139,
        '/', 195,
        '=', 201,
        '>', 207,
        '@', 208,
        'E', 121,
        'I', 126,
        '[', 203,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(212);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 154,
        '!', 206,
        '#', 211,
        '.', 139,
        '/', 195,
        '=', 201,
        '>', 207,
        '@', 208,
        'E', 134,
        'I', 138,
        '[', 203,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(212);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == '!') ADVANCE(206);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '@') ADVANCE(208);
      if (lookahead == '[') ADVANCE(203);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(212);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 71},
  [3] = {.lex_state = 71},
  [4] = {.lex_state = 71},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 71},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 71},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__title_element] = ACTIONS(1),
    [aux_sym_scene_token1] = ACTIONS(1),
    [aux_sym_scene_token2] = ACTIONS(1),
    [aux_sym_parenthetical_token1] = ACTIONS(1),
    [aux_sym_action_token1] = ACTIONS(1),
    [sym_transition] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_synope] = ACTIONS(1),
    [aux_sym_section_token1] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [aux_sym_boneyard_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(26),
    [sym_title_page] = STATE(2),
    [sym_scene] = STATE(3),
    [sym_dialogue] = STATE(3),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(3),
    [sym_section] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym__element] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_title_page_repeat1] = STATE(14),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__title_element] = ACTIONS(5),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [sym_transition] = ACTIONS(13),
    [sym_break] = ACTIONS(13),
    [sym_synope] = ACTIONS(13),
    [aux_sym_section_token1] = ACTIONS(15),
    [sym_note] = ACTIONS(13),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [2] = {
    [sym_scene] = STATE(4),
    [sym_dialogue] = STATE(4),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(4),
    [sym_section] = STATE(4),
    [sym_boneyard] = STATE(4),
    [sym__element] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [sym_transition] = ACTIONS(21),
    [sym_break] = ACTIONS(21),
    [sym_synope] = ACTIONS(21),
    [aux_sym_section_token1] = ACTIONS(15),
    [sym_note] = ACTIONS(21),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [3] = {
    [sym_scene] = STATE(5),
    [sym_dialogue] = STATE(5),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(5),
    [sym_section] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym__element] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [sym_transition] = ACTIONS(23),
    [sym_break] = ACTIONS(23),
    [sym_synope] = ACTIONS(23),
    [aux_sym_section_token1] = ACTIONS(15),
    [sym_note] = ACTIONS(23),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [4] = {
    [sym_scene] = STATE(5),
    [sym_dialogue] = STATE(5),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(5),
    [sym_section] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym__element] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [sym_transition] = ACTIONS(23),
    [sym_break] = ACTIONS(23),
    [sym_synope] = ACTIONS(23),
    [aux_sym_section_token1] = ACTIONS(15),
    [sym_note] = ACTIONS(23),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [5] = {
    [sym_scene] = STATE(5),
    [sym_dialogue] = STATE(5),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(5),
    [sym_section] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym__element] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_scene_token1] = ACTIONS(29),
    [aux_sym_scene_token2] = ACTIONS(29),
    [aux_sym_character_token1] = ACTIONS(32),
    [aux_sym_action_token1] = ACTIONS(35),
    [sym_transition] = ACTIONS(38),
    [sym_break] = ACTIONS(38),
    [sym_synope] = ACTIONS(38),
    [aux_sym_section_token1] = ACTIONS(41),
    [sym_note] = ACTIONS(38),
    [aux_sym_boneyard_token1] = ACTIONS(44),
    [sym__line] = ACTIONS(35),
  },
  [6] = {
    [sym_scene] = STATE(8),
    [sym_dialogue] = STATE(8),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(8),
    [sym__element] = STATE(8),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_scene_token1] = ACTIONS(49),
    [aux_sym_scene_token2] = ACTIONS(49),
    [aux_sym_character_token1] = ACTIONS(49),
    [aux_sym_action_token1] = ACTIONS(49),
    [sym_transition] = ACTIONS(49),
    [sym_break] = ACTIONS(49),
    [sym_synope] = ACTIONS(49),
    [aux_sym_section_token1] = ACTIONS(49),
    [sym_note] = ACTIONS(49),
    [aux_sym_boneyard_token1] = ACTIONS(49),
    [sym__line] = ACTIONS(49),
  },
  [7] = {
    [sym_scene] = STATE(7),
    [sym_dialogue] = STATE(7),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(7),
    [sym__element] = STATE(7),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_scene_token1] = ACTIONS(53),
    [aux_sym_scene_token2] = ACTIONS(53),
    [aux_sym_character_token1] = ACTIONS(56),
    [aux_sym_action_token1] = ACTIONS(59),
    [sym_transition] = ACTIONS(62),
    [sym_break] = ACTIONS(62),
    [sym_synope] = ACTIONS(62),
    [aux_sym_section_token1] = ACTIONS(65),
    [sym_note] = ACTIONS(62),
    [aux_sym_boneyard_token1] = ACTIONS(65),
    [sym__line] = ACTIONS(59),
  },
  [8] = {
    [sym_scene] = STATE(7),
    [sym_dialogue] = STATE(7),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(7),
    [sym__element] = STATE(7),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_scene_token1] = ACTIONS(69),
    [aux_sym_scene_token2] = ACTIONS(69),
    [aux_sym_character_token1] = ACTIONS(69),
    [aux_sym_action_token1] = ACTIONS(69),
    [sym_transition] = ACTIONS(69),
    [sym_break] = ACTIONS(69),
    [sym_synope] = ACTIONS(69),
    [aux_sym_section_token1] = ACTIONS(69),
    [sym_note] = ACTIONS(69),
    [aux_sym_boneyard_token1] = ACTIONS(69),
    [sym__line] = ACTIONS(69),
  },
  [9] = {
    [sym_dialogue] = STATE(9),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(9),
    [sym__element] = STATE(9),
    [aux_sym_scene_repeat1] = STATE(9),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_scene_token1] = ACTIONS(73),
    [aux_sym_scene_token2] = ACTIONS(73),
    [aux_sym_character_token1] = ACTIONS(75),
    [aux_sym_action_token1] = ACTIONS(78),
    [sym_transition] = ACTIONS(81),
    [sym_break] = ACTIONS(81),
    [sym_synope] = ACTIONS(81),
    [aux_sym_section_token1] = ACTIONS(73),
    [sym_note] = ACTIONS(81),
    [aux_sym_boneyard_token1] = ACTIONS(73),
    [sym__line] = ACTIONS(78),
  },
  [10] = {
    [sym_dialogue] = STATE(9),
    [sym_dialogue_block] = STATE(12),
    [sym_character] = STATE(22),
    [sym_action] = STATE(9),
    [sym__element] = STATE(9),
    [aux_sym_scene_repeat1] = STATE(9),
    [aux_sym_dialogue_repeat1] = STATE(12),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_scene_token1] = ACTIONS(86),
    [aux_sym_scene_token2] = ACTIONS(86),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [sym_transition] = ACTIONS(88),
    [sym_break] = ACTIONS(88),
    [sym_synope] = ACTIONS(88),
    [aux_sym_section_token1] = ACTIONS(86),
    [sym_note] = ACTIONS(88),
    [aux_sym_boneyard_token1] = ACTIONS(86),
    [sym__line] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    STATE(17), 1,
      aux_sym_action_repeat1,
    STATE(22), 1,
      sym_character,
    ACTIONS(11), 2,
      aux_sym_action_token1,
      sym__line,
    STATE(12), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(90), 4,
      sym_transition,
      sym_break,
      sym_synope,
      sym_note,
    STATE(10), 4,
      sym_dialogue,
      sym_action,
      sym__element,
      aux_sym_scene_repeat1,
  [30] = 5,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_character,
    STATE(13), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(94), 10,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [56] = 5,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      aux_sym_character_token1,
    STATE(22), 1,
      sym_character,
    STATE(13), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(98), 10,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [82] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym__title_element,
    STATE(15), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(107), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [105] = 4,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym__title_element,
    STATE(15), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(114), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [128] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_action_repeat1,
    ACTIONS(120), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(118), 9,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
  [150] = 4,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_action_repeat1,
    ACTIONS(127), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(125), 9,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
  [172] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [189] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      sym_transition,
      sym_break,
      sym_synope,
      aux_sym_section_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [206] = 4,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(139), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(141), 1,
      aux_sym_speech_token1,
    STATE(21), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [221] = 4,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(148), 1,
      aux_sym_speech_token1,
    STATE(21), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [236] = 3,
    ACTIONS(139), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(141), 1,
      aux_sym_speech_token1,
    STATE(20), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [248] = 1,
    ACTIONS(151), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [254] = 1,
    ACTIONS(153), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [260] = 1,
    ACTIONS(155), 2,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [265] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 30,
  [SMALL_STATE(13)] = 56,
  [SMALL_STATE(14)] = 82,
  [SMALL_STATE(15)] = 105,
  [SMALL_STATE(16)] = 128,
  [SMALL_STATE(17)] = 150,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 221,
  [SMALL_STATE(22)] = 236,
  [SMALL_STATE(23)] = 248,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_speech, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
