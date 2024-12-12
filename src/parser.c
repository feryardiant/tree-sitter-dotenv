#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  sym_comment = 2,
  sym_identifier = 3,
  anon_sym_DOLLAR = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SQUOTE = 7,
  aux_sym__literal_string_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__string_token1 = 10,
  sym_decimal = 11,
  sym_hexadecimal = 12,
  sym_float = 13,
  sym_boolean = 14,
  sym_value = 15,
  sym__end_of_assignment = 16,
  sym_document = 17,
  sym_assignment = 18,
  sym_variable = 19,
  sym__value = 20,
  sym_string = 21,
  sym__literal_string = 22,
  sym__string = 23,
  sym_number = 24,
  sym_integer = 25,
  aux_sym_document_repeat1 = 26,
  aux_sym__string_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "string_content",
  [sym_decimal] = "decimal",
  [sym_hexadecimal] = "hexadecimal",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [sym_value] = "value",
  [sym__end_of_assignment] = "_end_of_assignment",
  [sym_document] = "document",
  [sym_assignment] = "assignment",
  [sym_variable] = "variable",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym__literal_string] = "_literal_string",
  [sym__string] = "_string",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__literal_string_token1,
  [sym_decimal] = sym_decimal,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [sym_value] = sym_value,
  [sym__end_of_assignment] = sym__end_of_assignment,
  [sym_document] = sym_document,
  [sym_assignment] = sym_assignment,
  [sym_variable] = sym_variable,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym__literal_string] = sym__literal_string,
  [sym__string] = sym__string,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
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
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 10,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 11,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 25,
        '#', 11,
        '$', 19,
        '\'', 22,
        '-', 5,
        '0', 4,
        '=', 10,
        'f', 12,
        't', 15,
        '{', 20,
        '}', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '$') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 5:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '{') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_value);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__end_of_assignment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(15),
    [sym_assignment] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_variable] = STATE(19),
    [sym__value] = STATE(19),
    [sym_string] = STATE(19),
    [sym__literal_string] = STATE(20),
    [sym__string] = STATE(20),
    [sym_number] = STATE(19),
    [sym_integer] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_decimal] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_float] = ACTIONS(17),
    [sym_boolean] = ACTIONS(19),
    [sym_value] = ACTIONS(19),
    [sym__end_of_assignment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(3), 2,
      sym_assignment,
      aux_sym_document_repeat1,
  [14] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    STATE(3), 2,
      sym_assignment,
      aux_sym_document_repeat1,
  [28] = 4,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym__string_token1,
    STATE(6), 2,
      sym_variable,
      aux_sym__string_repeat1,
  [42] = 4,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      aux_sym__string_token1,
    STATE(7), 2,
      sym_variable,
      aux_sym__string_repeat1,
  [56] = 4,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      aux_sym__string_token1,
    STATE(7), 2,
      sym_variable,
      aux_sym__string_repeat1,
  [70] = 1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [76] = 1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [82] = 2,
    ACTIONS(59), 1,
      aux_sym__string_token1,
    ACTIONS(57), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [90] = 2,
    ACTIONS(63), 1,
      aux_sym__string_token1,
    ACTIONS(61), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [98] = 2,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym__literal_string_token1,
  [105] = 2,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
  [112] = 2,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
  [119] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [123] = 1,
    ACTIONS(79), 1,
      anon_sym_EQ,
  [127] = 1,
    ACTIONS(81), 1,
      sym__end_of_assignment,
  [131] = 1,
    ACTIONS(83), 1,
      sym__end_of_assignment,
  [135] = 1,
    ACTIONS(85), 1,
      sym__end_of_assignment,
  [139] = 1,
    ACTIONS(87), 1,
      sym__end_of_assignment,
  [143] = 1,
    ACTIONS(59), 1,
      sym__end_of_assignment,
  [147] = 1,
    ACTIONS(89), 1,
      sym__end_of_assignment,
  [151] = 1,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
  [155] = 1,
    ACTIONS(93), 1,
      sym__end_of_assignment,
  [159] = 1,
    ACTIONS(95), 1,
      sym__end_of_assignment,
  [163] = 1,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
  [167] = 1,
    ACTIONS(63), 1,
      sym__end_of_assignment,
  [171] = 1,
    ACTIONS(99), 1,
      sym__end_of_assignment,
  [175] = 1,
    ACTIONS(101), 1,
      sym_identifier,
  [179] = 1,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
  [183] = 1,
    ACTIONS(105), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 98,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 123,
  [SMALL_STATE(17)] = 127,
  [SMALL_STATE(18)] = 131,
  [SMALL_STATE(19)] = 135,
  [SMALL_STATE(20)] = 139,
  [SMALL_STATE(21)] = 143,
  [SMALL_STATE(22)] = 147,
  [SMALL_STATE(23)] = 151,
  [SMALL_STATE(24)] = 155,
  [SMALL_STATE(25)] = 159,
  [SMALL_STATE(26)] = 163,
  [SMALL_STATE(27)] = 167,
  [SMALL_STATE(28)] = 171,
  [SMALL_STATE(29)] = 175,
  [SMALL_STATE(30)] = 179,
  [SMALL_STATE(31)] = 183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__end_of_assignment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__end_of_assignment] = sym__end_of_assignment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__end_of_assignment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dotenv_external_scanner_create(void);
void tree_sitter_dotenv_external_scanner_destroy(void *);
bool tree_sitter_dotenv_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dotenv_external_scanner_serialize(void *, char *);
void tree_sitter_dotenv_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dotenv(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dotenv_external_scanner_create,
      tree_sitter_dotenv_external_scanner_destroy,
      tree_sitter_dotenv_external_scanner_scan,
      tree_sitter_dotenv_external_scanner_serialize,
      tree_sitter_dotenv_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
