#ifndef __GENPROF_H__
#define __GENPROF_H__

/*
 Copyright (c) 2006 Trevor Williams

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 See the GNU General Public License for more details.

 You should have received a copy of the GNU General Public License along with this program;
 if not, write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/*!
 \file    genprof.h
 \author  Trevor Williams  (phase1geo@gmail.com)
 \date    12/10/2007
*/

#include "defines.h"

#define NUM_PROFILES 1035

#ifdef DEBUG
#define UNREGISTERED 0
#define FSM_ARG_PARSE_STATE 1
#define FSM_ARG_PARSE 2
#define FSM_ARG_PARSE_VALUE 3
#define FSM_ARG_PARSE_TRANS 4
#define FSM_ARG_PARSE_ATTR 5
#define SYM_VALUE_STORE 6
#define ADD_SYM_VALUES_TO_SIM 7
#define COVERED_VALUE_CHANGE_BIN 8
#define COVERED_VALUE_CHANGE_REAL 9
#define COVERED_END_OF_SIM 10
#define COVERED_CB_ERROR_HANDLER 11
#define GEN_NEXT_SYMBOL 12
#define COVERED_CREATE_VALUE_CHANGE_CB 13
#define COVERED_PARSE_TASK_FUNC 14
#define COVERED_PARSE_SIGNALS 15
#define COVERED_PARSE_INSTANCE 16
#define COVERED_SIM_CALLTF 17
#define COVERED_REGISTER 18
#define LEXER_KEYWORD_SV_CODE 19
#define VSIGNAL_INIT 20
#define VSIGNAL_CREATE 21
#define VSIGNAL_CREATE_VEC 22
#define VSIGNAL_DUPLICATE 23
#define VSIGNAL_DB_WRITE 24
#define VSIGNAL_DB_READ 25
#define VSIGNAL_DB_MERGE 26
#define VSIGNAL_MERGE 27
#define VSIGNAL_PROPAGATE 28
#define VSIGNAL_VCD_ASSIGN 29
#define VSIGNAL_ADD_EXPRESSION 30
#define VSIGNAL_FROM_STRING 31
#define VSIGNAL_CALC_WIDTH_FOR_EXPR 32
#define VSIGNAL_CALC_LSB_FOR_EXPR 33
#define VSIGNAL_DEALLOC 34
#define LEXER_KEYWORD_1995_CODE 35
#define STMT_ITER_RESET 36
#define STMT_ITER_COPY 37
#define STMT_ITER_NEXT 38
#define STMT_ITER_REVERSE 39
#define STMT_ITER_FIND_HEAD 40
#define STMT_ITER_GET_NEXT_IN_ORDER 41
#define STMT_ITER_GET_LINE_BEFORE 42
#define LEXER_CSTRING_A 43
#define LEXER_KEYWORD_A 44
#define LEXER_ESCAPED_NAME 45
#define LEXER_SYSTEM_CALL 46
#define LINE_DIRECTIVE 47
#define LINE_DIRECTIVE2 48
#define PROCESS_TIMESCALE_TOKEN 49
#define PROCESS_TIMESCALE 50
#define LEXER_YYWRAP 51
#define RESET_LEXER 52
#define CHECK_FOR_PRAGMA 53
#define STATEMENT_CREATE 54
#define STATEMENT_QUEUE_ADD 55
#define STATEMENT_QUEUE_COMPARE 56
#define STATEMENT_SIZE_ELEMENTS 57
#define STATEMENT_DB_WRITE 58
#define STATEMENT_DB_WRITE_TREE 59
#define STATEMENT_DB_WRITE_EXPR_TREE 60
#define STATEMENT_DB_READ 61
#define STATEMENT_ASSIGN_EXPR_IDS 62
#define STATEMENT_CONNECT 63
#define STATEMENT_GET_LAST_LINE_HELPER 64
#define STATEMENT_GET_LAST_LINE 65
#define STATEMENT_FIND_RHS_SIGS 66
#define STATEMENT_FIND_HEAD_STATEMENT 67
#define STATEMENT_FIND_STATEMENT 68
#define STATEMENT_CONTAINS_EXPR_CALLING_STMT 69
#define STATEMENT_DEALLOC_RECURSIVE 70
#define STATEMENT_DEALLOC 71
#define ENUMERATE_ADD_ITEM 72
#define ENUMERATE_END_LIST 73
#define ENUMERATE_RESOLVE 74
#define ENUMERATE_DEALLOC 75
#define ENUMERATE_DEALLOC_LIST 76
#define PARSER_PORT_DECLARATION_A 77
#define PARSER_PORT_DECLARATION_B 78
#define PARSER_PORT_DECLARATION_C 79
#define PARSER_STATIC_EXPR_PRIMARY_A 80
#define PARSER_STATIC_EXPR_PRIMARY_B 81
#define PARSER_EXPRESSION_LIST_A 82
#define PARSER_EXPRESSION_LIST_B 83
#define PARSER_EXPRESSION_LIST_C 84
#define PARSER_EXPRESSION_LIST_D 85
#define PARSER_IDENTIFIER_A 86
#define PARSER_GENERATE_CASE_ITEM_A 87
#define PARSER_GENERATE_CASE_ITEM_B 88
#define PARSER_GENERATE_CASE_ITEM_C 89
#define PARSER_STATEMENT_BEGIN_A 90
#define PARSER_STATEMENT_FORK_A 91
#define PARSER_STATEMENT_FOR_A 92
#define PARSER_CASE_ITEM_A 93
#define PARSER_CASE_ITEM_B 94
#define PARSER_CASE_ITEM_C 95
#define PARSER_DELAY_VALUE_A 96
#define PARSER_DELAY_VALUE_B 97
#define PARSER_PARAMETER_VALUE_BYNAME_A 98
#define PARSER_GATE_INSTANCE_A 99
#define PARSER_GATE_INSTANCE_B 100
#define PARSER_GATE_INSTANCE_C 101
#define PARSER_GATE_INSTANCE_D 102
#define PARSER_LIST_OF_NAMES_A 103
#define PARSER_LIST_OF_NAMES_B 104
#define ATTRIBUTE_CREATE 105
#define ATTRIBUTE_PARSE 106
#define ATTRIBUTE_DEALLOC 107
#define SEARCH_INIT 108
#define SEARCH_ADD_INCLUDE_PATH 109
#define SEARCH_ADD_DIRECTORY_PATH 110
#define SEARCH_ADD_FILE 111
#define SEARCH_ADD_NO_SCORE_FUNIT 112
#define SEARCH_ADD_EXTENSIONS 113
#define SEARCH_FREE_LISTS 114
#define RANK_CREATE_COMP_CDD_COV 115
#define RANK_DEALLOC_COMP_CDD_COV 116
#define RANK_CHECK_INDEX 117
#define RANK_GATHER_SIGNAL_COV 118
#define RANK_GATHER_COMB_COV 119
#define RANK_GATHER_EXPRESSION_COV 120
#define RANK_GATHER_FSM_COV 121
#define RANK_CALC_NUM_CPS 122
#define RANK_GATHER_COMP_CDD_COV 123
#define RANK_READ_CDD 124
#define RANK_SELECTED_CDD_COV 125
#define RANK_PERFORM_WEIGHTED_SELECTION 126
#define RANK_PERFORM_GREEDY_SORT 127
#define RANK_COUNT_CPS 128
#define RANK_PERFORM 129
#define RANK_OUTPUT 130
#define COMMAND_RANK 131
#define SIM_CURRENT_THREAD 132
#define SIM_THREAD_POP_HEAD 133
#define SIM_THREAD_INSERT_INTO_DELAY_QUEUE 134
#define SIM_THREAD_PUSH 135
#define SIM_EXPR_CHANGED 136
#define SIM_CREATE_THREAD 137
#define SIM_ADD_THREAD 138
#define SIM_KILL_THREAD 139
#define SIM_KILL_THREAD_WITH_FUNIT 140
#define SIM_ADD_STATICS 141
#define SIM_EXPRESSION 142
#define SIM_THREAD 143
#define SIM_SIMULATE 144
#define SIM_INITIALIZE 145
#define SIM_STOP 146
#define SIM_FINISH 147
#define SIM_DEALLOC 148
#define SCOPE_FIND_FUNIT_FROM_SCOPE 149
#define SCOPE_FIND_PARAM 150
#define SCOPE_FIND_SIGNAL 151
#define SCOPE_FIND_TASK_FUNCTION_NAMEDBLOCK 152
#define SCOPE_GET_PARENT_FUNIT 153
#define SCOPE_GET_PARENT_MODULE 154
#define REPORT_PARSE_METRICS 155
#define REPORT_PARSE_ARGS 156
#define REPORT_GATHER_INSTANCE_STATS 157
#define REPORT_GATHER_FUNIT_STATS 158
#define REPORT_PRINT_HEADER 159
#define REPORT_GENERATE 160
#define REPORT_READ_CDD_AND_READY 161
#define REPORT_CLOSE_CDD 162
#define REPORT_SAVE_CDD 163
#define REPORT_FORMAT_EXCLUSION_REASON 164
#define REPORT_OUTPUT_EXCLUSION_REASON 165
#define COMMAND_REPORT 166
#define CHECK_OPTION_VALUE 167
#define IS_VARIABLE 168
#define IS_FUNC_UNIT 169
#define IS_LEGAL_FILENAME 170
#define GET_BASENAME 171
#define GET_DIRNAME 172
#define GET_ABSOLUTE_PATH 173
#define GET_RELATIVE_PATH 174
#define DIRECTORY_EXISTS 175
#define DIRECTORY_LOAD 176
#define FILE_EXISTS 177
#define UTIL_READLINE 178
#define GET_QUOTED_STRING 179
#define SUBSTITUTE_ENV_VARS 180
#define SCOPE_EXTRACT_FRONT 181
#define SCOPE_EXTRACT_BACK 182
#define SCOPE_EXTRACT_SCOPE 183
#define SCOPE_GEN_PRINTABLE 184
#define SCOPE_COMPARE 185
#define SCOPE_LOCAL 186
#define CONVERT_FILE_TO_MODULE 187
#define GET_NEXT_VFILE 188
#define GEN_SPACE 189
#define GET_FUNIT_TYPE 190
#define CALC_MISS_PERCENT 191
#define READ_COMMAND_FILE 192
#define OVL_IS_ASSERTION_NAME 193
#define OVL_IS_ASSERTION_MODULE 194
#define OVL_IS_COVERAGE_POINT 195
#define OVL_ADD_ASSERTIONS_TO_NO_SCORE_LIST 196
#define OVL_GET_FUNIT_STATS 197
#define OVL_GET_COVERAGE_POINT 198
#define OVL_DISPLAY_VERBOSE 199
#define OVL_COLLECT 200
#define OVL_GET_COVERAGE 201
#define COMBINATION_CALC_DEPTH 202
#define COMBINATION_DOES_MULTI_EXP_NEED_UL 203
#define COMBINATION_MULTI_EXPR_CALC 204
#define COMBINATION_IS_EXPR_MULTI_NODE 205
#define COMBINATION_GET_TREE_STATS 206
#define COMBINATION_RESET_COUNTED_EXPRS 207
#define COMBINATION_RESET_COUNTED_EXPR_TREE 208
#define COMBINATION_GET_STATS 209
#define COMBINATION_GET_FUNIT_SUMMARY 210
#define COMBINATION_GET_INST_SUMMARY 211
#define COMBINATION_DISPLAY_INSTANCE_SUMMARY 212
#define COMBINATION_INSTANCE_SUMMARY 213
#define COMBINATION_DISPLAY_FUNIT_SUMMARY 214
#define COMBINATION_FUNIT_SUMMARY 215
#define COMBINATION_DRAW_LINE 216
#define COMBINATION_DRAW_CENTERED_LINE 217
#define COMBINATION_UNDERLINE_TREE 218
#define COMBINATION_PREP_LINE 219
#define COMBINATION_UNDERLINE 220
#define COMBINATION_UNARY 221
#define COMBINATION_EVENT 222
#define COMBINATION_TWO_VARS 223
#define COMBINATION_MULTI_VAR_EXPRS 224
#define COMBINATION_MULTI_EXPR_OUTPUT_LENGTH 225
#define COMBINATION_MULTI_EXPR_OUTPUT 226
#define COMBINATION_MULTI_VARS 227
#define COMBINATION_GET_MISSED_EXPR 228
#define COMBINATION_LIST_MISSED 229
#define COMBINATION_OUTPUT_EXPR 230
#define COMBINATION_DISPLAY_VERBOSE 231
#define COMBINATION_INSTANCE_VERBOSE 232
#define COMBINATION_FUNIT_VERBOSE 233
#define COMBINATION_COLLECT 234
#define COMBINATION_GET_EXCLUDE_LIST 235
#define COMBINATION_GET_EXPRESSION 236
#define COMBINATION_GET_COVERAGE 237
#define COMBINATION_REPORT 238
#define VCD_PARSE_DEF_IGNORE 239
#define VCD_PARSE_DEF_VAR 240
#define VCD_PARSE_DEF_SCOPE 241
#define VCD_PARSE_DEF 242
#define VCD_PARSE_SIM_VECTOR 243
#define VCD_PARSE_SIM_REAL 244
#define VCD_PARSE_SIM_IGNORE 245
#define VCD_PARSE_SIM 246
#define VCD_PARSE 247
#define STMT_BLK_ADD_TO_REMOVE_LIST 248
#define STMT_BLK_REMOVE 249
#define STMT_BLK_SPECIFY_REMOVAL_REASON 250
#define STR_LINK_ADD 251
#define STMT_LINK_ADD_HEAD 252
#define STMT_LINK_ADD_TAIL 253
#define STMT_LINK_MERGE 254
#define EXP_LINK_ADD 255
#define SIG_LINK_ADD 256
#define FSM_LINK_ADD 257
#define FUNIT_LINK_ADD 258
#define GITEM_LINK_ADD 259
#define INST_LINK_ADD 260
#define STR_LINK_FIND 261
#define STMT_LINK_FIND 262
#define EXP_LINK_FIND 263
#define SIG_LINK_FIND 264
#define FSM_LINK_FIND 265
#define FUNIT_LINK_FIND 266
#define GITEM_LINK_FIND 267
#define INST_LINK_FIND_BY_SCOPE 268
#define INST_LINK_FIND_BY_FUNIT 269
#define STR_LINK_REMOVE 270
#define EXP_LINK_REMOVE 271
#define GITEM_LINK_REMOVE 272
#define FUNIT_LINK_REMOVE 273
#define INST_LINK_FLATTEN 274
#define STR_LINK_DELETE_LIST 275
#define STMT_LINK_UNLINK 276
#define STMT_LINK_DELETE_LIST 277
#define EXP_LINK_DELETE_LIST 278
#define SIG_LINK_DELETE_LIST 279
#define FSM_LINK_DELETE_LIST 280
#define FUNIT_LINK_DELETE_LIST 281
#define GITEM_LINK_DELETE_LIST 282
#define INST_LINK_DELETE_LIST 283
#define LEXER_KEYWORD_SYS_SV_CODE 284
#define SCORE_GENERATE_TOP_VPI_MODULE 285
#define SCORE_GENERATE_TOP_DUMPVARS_MODULE 286
#define SCORE_GENERATE_PLI_TAB_FILE 287
#define SCORE_PARSE_DEFINE 288
#define SCORE_ADD_ARG 289
#define SCORE_PARSE_ARGS 290
#define COMMAND_SCORE 291
#define MEMORY_GET_STAT 292
#define MEMORY_GET_STATS 293
#define MEMORY_GET_FUNIT_SUMMARY 294
#define MEMORY_GET_INST_SUMMARY 295
#define MEMORY_CREATE_PDIM_BIT_ARRAY 296
#define MEMORY_GET_MEM_COVERAGE 297
#define MEMORY_GET_COVERAGE 298
#define MEMORY_COLLECT 299
#define MEMORY_DISPLAY_TOGGLE_INSTANCE_SUMMARY 300
#define MEMORY_TOGGLE_INSTANCE_SUMMARY 301
#define MEMORY_DISPLAY_AE_INSTANCE_SUMMARY 302
#define MEMORY_AE_INSTANCE_SUMMARY 303
#define MEMORY_DISPLAY_TOGGLE_FUNIT_SUMMARY 304
#define MEMORY_TOGGLE_FUNIT_SUMMARY 305
#define MEMORY_DISPLAY_AE_FUNIT_SUMMARY 306
#define MEMORY_AE_FUNIT_SUMMARY 307
#define MEMORY_DISPLAY_MEMORY 308
#define MEMORY_DISPLAY_VERBOSE 309
#define MEMORY_INSTANCE_VERBOSE 310
#define MEMORY_FUNIT_VERBOSE 311
#define MEMORY_REPORT 312
#define DB_CREATE 313
#define DB_CLOSE 314
#define DB_CHECK_FOR_TOP_MODULE 315
#define DB_WRITE 316
#define DB_READ 317
#define DB_MERGE_FUNITS 318
#define DB_SCALE_TO_PRECISION 319
#define DB_CREATE_UNNAMED_SCOPE 320
#define DB_IS_UNNAMED_SCOPE 321
#define DB_SET_TIMESCALE 322
#define DB_GET_CURR_FUNIT 323
#define DB_GET_EXCLUSION_ID_SIZE 324
#define DB_GEN_EXCLUSION_ID 325
#define DB_ADD_FILE_VERSION 326
#define DB_OUTPUT_DUMPVARS 327
#define DB_ADD_INSTANCE 328
#define DB_ADD_MODULE 329
#define DB_END_MODULE 330
#define DB_ADD_FUNCTION_TASK_NAMEDBLOCK 331
#define DB_END_FUNCTION_TASK_NAMEDBLOCK 332
#define DB_ADD_DECLARED_PARAM 333
#define DB_ADD_OVERRIDE_PARAM 334
#define DB_ADD_VECTOR_PARAM 335
#define DB_ADD_DEFPARAM 336
#define DB_ADD_SIGNAL 337
#define DB_ADD_ENUM 338
#define DB_END_ENUM_LIST 339
#define DB_ADD_TYPEDEF 340
#define DB_FIND_SIGNAL 341
#define DB_ADD_GEN_ITEM_BLOCK 342
#define DB_FIND_GEN_ITEM 343
#define DB_FIND_TYPEDEF 344
#define DB_GET_CURR_GEN_BLOCK 345
#define DB_CURR_SIGNAL_COUNT 346
#define DB_CREATE_EXPRESSION 347
#define DB_BIND_EXPR_TREE 348
#define DB_CREATE_EXPR_FROM_STATIC 349
#define DB_ADD_EXPRESSION 350
#define DB_CREATE_SENSITIVITY_LIST 351
#define DB_PARALLELIZE_STATEMENT 352
#define DB_CREATE_STATEMENT 353
#define DB_ADD_STATEMENT 354
#define DB_REMOVE_STATEMENT_FROM_CURRENT_FUNIT 355
#define DB_REMOVE_STATEMENT 356
#define DB_CONNECT_STATEMENT_TRUE 357
#define DB_CONNECT_STATEMENT_FALSE 358
#define DB_GEN_ITEM_CONNECT_TRUE 359
#define DB_GEN_ITEM_CONNECT_FALSE 360
#define DB_GEN_ITEM_CONNECT 361
#define DB_STATEMENT_CONNECT 362
#define DB_CREATE_ATTR_PARAM 363
#define DB_PARSE_ATTRIBUTE 364
#define DB_REMOVE_STMT_BLKS_CALLING_STATEMENT 365
#define DB_GEN_CURR_INST_SCOPE 366
#define DB_SYNC_CURR_INSTANCE 367
#define DB_SET_VCD_SCOPE 368
#define DB_VCD_UPSCOPE 369
#define DB_ASSIGN_SYMBOL 370
#define DB_SET_SYMBOL_CHAR 371
#define DB_SET_SYMBOL_STRING 372
#define DB_DO_TIMESTEP 373
#define FSM_CREATE 374
#define FSM_ADD_ARC 375
#define FSM_CREATE_TABLES 376
#define FSM_DB_WRITE 377
#define FSM_DB_READ 378
#define FSM_DB_MERGE 379
#define FSM_MERGE 380
#define FSM_TABLE_SET 381
#define FSM_GET_STATS 382
#define FSM_GET_FUNIT_SUMMARY 383
#define FSM_GET_INST_SUMMARY 384
#define FSM_GATHER_SIGNALS 385
#define FSM_COLLECT 386
#define FSM_GET_COVERAGE 387
#define FSM_DISPLAY_INSTANCE_SUMMARY 388
#define FSM_INSTANCE_SUMMARY 389
#define FSM_DISPLAY_FUNIT_SUMMARY 390
#define FSM_FUNIT_SUMMARY 391
#define FSM_DISPLAY_STATE_VERBOSE 392
#define FSM_DISPLAY_ARC_VERBOSE 393
#define FSM_DISPLAY_VERBOSE 394
#define FSM_INSTANCE_VERBOSE 395
#define FSM_FUNIT_VERBOSE 396
#define FSM_REPORT 397
#define FSM_DEALLOC 398
#define CODEGEN_CREATE_EXPR_HELPER 399
#define CODEGEN_CREATE_EXPR 400
#define CODEGEN_GEN_EXPR 401
#define TOGGLE_GET_STATS 402
#define TOGGLE_COLLECT 403
#define TOGGLE_GET_COVERAGE 404
#define TOGGLE_GET_FUNIT_SUMMARY 405
#define TOGGLE_GET_INST_SUMMARY 406
#define TOGGLE_DISPLAY_INSTANCE_SUMMARY 407
#define TOGGLE_INSTANCE_SUMMARY 408
#define TOGGLE_DISPLAY_FUNIT_SUMMARY 409
#define TOGGLE_FUNIT_SUMMARY 410
#define TOGGLE_DISPLAY_VERBOSE 411
#define TOGGLE_INSTANCE_VERBOSE 412
#define TOGGLE_FUNIT_VERBOSE 413
#define TOGGLE_REPORT 414
#define VLERROR 415
#define VLWARN 416
#define PARSER_DEALLOC_SIG_RANGE 417
#define PARSER_COPY_CURR_RANGE 418
#define PARSER_COPY_RANGE_TO_CURR_RANGE 419
#define PARSER_EXPLICITLY_SET_CURR_RANGE 420
#define PARSER_IMPLICITLY_SET_CURR_RANGE 421
#define PARSER_CHECK_GENERATION 422
#define LEXER_KEYWORD_2001_CODE 423
#define STRUCT_UNION_LENGTH 424
#define STRUCT_UNION_ADD_MEMBER 425
#define STRUCT_UNION_ADD_MEMBER_VOID 426
#define STRUCT_UNION_ADD_MEMBER_SIG 427
#define STRUCT_UNION_ADD_MEMBER_TYPEDEF 428
#define STRUCT_UNION_ADD_MEMBER_ENUM 429
#define STRUCT_UNION_ADD_MEMBER_STRUCT_UNION 430
#define STRUCT_UNION_CREATE 431
#define STRUCT_UNION_MEMBER_DEALLOC 432
#define STRUCT_UNION_DEALLOC 433
#define STRUCT_UNION_DEALLOC_LIST 434
#define BIND_ADD 435
#define BIND_APPEND_FSM_EXPR 436
#define BIND_REMOVE 437
#define BIND_FIND_SIG_NAME 438
#define BIND_PARAM 439
#define BIND_SIGNAL 440
#define BIND_TASK_FUNCTION_PORTS 441
#define BIND_TASK_FUNCTION_NAMEDBLOCK 442
#define BIND_PERFORM 443
#define BIND_DEALLOC 444
#define PERF_GEN_STATS 445
#define PERF_OUTPUT_MOD_STATS 446
#define PERF_OUTPUT_INST_REPORT_HELPER 447
#define PERF_OUTPUT_INST_REPORT 448
#define MOD_PARM_FIND 449
#define MOD_PARM_FIND_EXPR_AND_REMOVE 450
#define MOD_PARM_ADD 451
#define INST_PARM_FIND 452
#define INST_PARM_ADD 453
#define INST_PARM_ADD_GENVAR 454
#define INST_PARM_BIND 455
#define DEFPARAM_ADD 456
#define DEFPARAM_DEALLOC 457
#define PARAM_FIND_AND_SET_EXPR_VALUE 458
#define PARAM_SET_SIG_SIZE 459
#define PARAM_SIZE_FUNCTION 460
#define PARAM_EXPR_EVAL 461
#define PARAM_HAS_OVERRIDE 462
#define PARAM_HAS_DEFPARAM 463
#define PARAM_RESOLVE_DECLARED 464
#define PARAM_RESOLVE_OVERRIDE 465
#define PARAM_RESOLVE 466
#define PARAM_DB_WRITE 467
#define MOD_PARM_DEALLOC 468
#define INST_PARM_DEALLOC 469
#define SYS_TASK_UNIFORM 470
#define SYS_TASK_RTL_DIST_UNIFORM 471
#define SYS_TASK_SRANDOM 472
#define SYS_TASK_RANDOM 473
#define SYS_TASK_URANDOM 474
#define SYS_TASK_URANDOM_RANGE 475
#define SYS_TASK_REALTOBITS 476
#define SYS_TASK_BITSTOREAL 477
#define SYS_TASK_SHORTREALTOBITS 478
#define SYS_TASK_BITSTOSHORTREAL 479
#define SYS_TASK_ITOR 480
#define SYS_TASK_RTOI 481
#define DEF_LOOKUP 482
#define IS_DEFINED 483
#define DEF_MATCH 484
#define DEF_START 485
#define DEFINE_MACRO 486
#define DO_DEFINE 487
#define DEF_IS_DONE 488
#define DEF_FINISH 489
#define DEF_UNDEFINE 490
#define INCLUDE_FILENAME 491
#define DO_INCLUDE 492
#define YYWRAP 493
#define RESET_PPLEXER 494
#define REENTRANT_COUNT_AFU_BITS 495
#define REENTRANT_STORE_DATA_BITS 496
#define REENTRANT_RESTORE_DATA_BITS 497
#define REENTRANT_CREATE 498
#define REENTRANT_DEALLOC 499
#define PARSE_READLINE 500
#define PARSE_DESIGN 501
#define PARSE_AND_SCORE_DUMPFILE 502
#define LEXER_KEYWORD_SYS_2001_CODE 503
#define OBFUSCATE_SET_MODE 504
#define OBFUSCATE_NAME 505
#define OBFUSCATE_DEALLOC 506
#define INFO_SET_VECTOR_ELEM_SIZE 507
#define INFO_DB_WRITE 508
#define INFO_DB_READ 509
#define ARGS_DB_READ 510
#define MESSAGE_DB_READ 511
#define MERGED_CDD_DB_READ 512
#define INFO_DEALLOC 513
#define ASSERTION_PARSE 514
#define ASSERTION_PARSE_ATTR 515
#define ASSERTION_GET_STATS 516
#define ASSERTION_DISPLAY_INSTANCE_SUMMARY 517
#define ASSERTION_INSTANCE_SUMMARY 518
#define ASSERTION_DISPLAY_FUNIT_SUMMARY 519
#define ASSERTION_FUNIT_SUMMARY 520
#define ASSERTION_DISPLAY_VERBOSE 521
#define ASSERTION_INSTANCE_VERBOSE 522
#define ASSERTION_FUNIT_VERBOSE 523
#define ASSERTION_REPORT 524
#define ASSERTION_GET_FUNIT_SUMMARY 525
#define ASSERTION_COLLECT 526
#define ASSERTION_GET_COVERAGE 527
#define LXT2_RD_EXPAND_INTEGER_TO_BITS 528
#define LXT2_RD_EXPAND_BITS_TO_INTEGER 529
#define LXT2_RD_ITER_RADIX 530
#define LXT2_RD_ITER_RADIX0 531
#define LXT2_RD_BUILD_RADIX 532
#define LXT2_RD_REGENERATE_PROCESS_MASK 533
#define LXT2_RD_PROCESS_BLOCK 534
#define LXT2_RD_INIT 535
#define LXT2_RD_CLOSE 536
#define LXT2_RD_GET_FACNAME 537
#define LXT2_RD_ITER_BLOCKS 538
#define LXT2_RD_LIMIT_TIME_RANGE 539
#define LXT2_RD_UNLIMIT_TIME_RANGE 540
#define TREE_ADD 541
#define TREE_FIND 542
#define TREE_REMOVE 543
#define TREE_DEALLOC 544
#define EXPRESSION_CREATE_TMP_VECS 545
#define EXPRESSION_CREATE_VALUE 546
#define EXPRESSION_CREATE 547
#define EXPRESSION_SET_VALUE 548
#define EXPRESSION_SET_SIGNED 549
#define EXPRESSION_RESIZE 550
#define EXPRESSION_GET_ID 551
#define EXPRESSION_GET_FIRST_LINE_EXPR 552
#define EXPRESSION_GET_LAST_LINE_EXPR 553
#define EXPRESSION_GET_CURR_DIMENSION 554
#define EXPRESSION_FIND_RHS_SIGS 555
#define EXPRESSION_FIND_PARAMS 556
#define EXPRESSION_FIND_ULINE_ID 557
#define EXPRESSION_FIND_EXPR 558
#define EXPRESSION_CONTAINS_EXPR_CALLING_STMT 559
#define EXPRESSION_GET_ROOT_STATEMENT 560
#define EXPRESSION_ASSIGN_EXPR_IDS 561
#define EXPRESSION_DB_WRITE 562
#define EXPRESSION_DB_WRITE_TREE 563
#define EXPRESSION_DB_READ 564
#define EXPRESSION_DB_MERGE 565
#define EXPRESSION_MERGE 566
#define EXPRESSION_STRING_OP 567
#define EXPRESSION_STRING 568
#define EXPRESSION_OP_FUNC__XOR 569
#define EXPRESSION_OP_FUNC__XOR_A 570
#define EXPRESSION_OP_FUNC__MULTIPLY 571
#define EXPRESSION_OP_FUNC__MULTIPLY_A 572
#define EXPRESSION_OP_FUNC__DIVIDE 573
#define EXPRESSION_OP_FUNC__DIVIDE_A 574
#define EXPRESSION_OP_FUNC__MOD 575
#define EXPRESSION_OP_FUNC__MOD_A 576
#define EXPRESSION_OP_FUNC__ADD 577
#define EXPRESSION_OP_FUNC__ADD_A 578
#define EXPRESSION_OP_FUNC__SUBTRACT 579
#define EXPRESSION_OP_FUNC__SUB_A 580
#define EXPRESSION_OP_FUNC__AND 581
#define EXPRESSION_OP_FUNC__AND_A 582
#define EXPRESSION_OP_FUNC__OR 583
#define EXPRESSION_OP_FUNC__OR_A 584
#define EXPRESSION_OP_FUNC__NAND 585
#define EXPRESSION_OP_FUNC__NOR 586
#define EXPRESSION_OP_FUNC__NXOR 587
#define EXPRESSION_OP_FUNC__LT 588
#define EXPRESSION_OP_FUNC__GT 589
#define EXPRESSION_OP_FUNC__LSHIFT 590
#define EXPRESSION_OP_FUNC__LSHIFT_A 591
#define EXPRESSION_OP_FUNC__RSHIFT 592
#define EXPRESSION_OP_FUNC__RSHIFT_A 593
#define EXPRESSION_OP_FUNC__ARSHIFT 594
#define EXPRESSION_OP_FUNC__ARSHIFT_A 595
#define EXPRESSION_OP_FUNC__TIME 596
#define EXPRESSION_OP_FUNC__RANDOM 597
#define EXPRESSION_OP_FUNC__SASSIGN 598
#define EXPRESSION_OP_FUNC__SRANDOM 599
#define EXPRESSION_OP_FUNC__URANDOM 600
#define EXPRESSION_OP_FUNC__URANDOM_RANGE 601
#define EXPRESSION_OP_FUNC__REALTOBITS 602
#define EXPRESSION_OP_FUNC__BITSTOREAL 603
#define EXPRESSION_OP_FUNC__SHORTREALTOBITS 604
#define EXPRESSION_OP_FUNC__BITSTOSHORTREAL 605
#define EXPRESSION_OP_FUNC__ITOR 606
#define EXPRESSION_OP_FUNC__RTOI 607
#define EXPRESSION_OP_FUNC__EQ 608
#define EXPRESSION_OP_FUNC__CEQ 609
#define EXPRESSION_OP_FUNC__LE 610
#define EXPRESSION_OP_FUNC__GE 611
#define EXPRESSION_OP_FUNC__NE 612
#define EXPRESSION_OP_FUNC__CNE 613
#define EXPRESSION_OP_FUNC__LOR 614
#define EXPRESSION_OP_FUNC__LAND 615
#define EXPRESSION_OP_FUNC__COND 616
#define EXPRESSION_OP_FUNC__COND_SEL 617
#define EXPRESSION_OP_FUNC__UINV 618
#define EXPRESSION_OP_FUNC__UAND 619
#define EXPRESSION_OP_FUNC__UNOT 620
#define EXPRESSION_OP_FUNC__UOR 621
#define EXPRESSION_OP_FUNC__UXOR 622
#define EXPRESSION_OP_FUNC__UNAND 623
#define EXPRESSION_OP_FUNC__UNOR 624
#define EXPRESSION_OP_FUNC__UNXOR 625
#define EXPRESSION_OP_FUNC__NULL 626
#define EXPRESSION_OP_FUNC__SIG 627
#define EXPRESSION_OP_FUNC__SBIT 628
#define EXPRESSION_OP_FUNC__MBIT 629
#define EXPRESSION_OP_FUNC__EXPAND 630
#define EXPRESSION_OP_FUNC__LIST 631
#define EXPRESSION_OP_FUNC__CONCAT 632
#define EXPRESSION_OP_FUNC__PEDGE 633
#define EXPRESSION_OP_FUNC__NEDGE 634
#define EXPRESSION_OP_FUNC__AEDGE 635
#define EXPRESSION_OP_FUNC__EOR 636
#define EXPRESSION_OP_FUNC__SLIST 637
#define EXPRESSION_OP_FUNC__DELAY 638
#define EXPRESSION_OP_FUNC__TRIGGER 639
#define EXPRESSION_OP_FUNC__CASE 640
#define EXPRESSION_OP_FUNC__CASEX 641
#define EXPRESSION_OP_FUNC__CASEZ 642
#define EXPRESSION_OP_FUNC__DEFAULT 643
#define EXPRESSION_OP_FUNC__BASSIGN 644
#define EXPRESSION_OP_FUNC__FUNC_CALL 645
#define EXPRESSION_OP_FUNC__TASK_CALL 646
#define EXPRESSION_OP_FUNC__NB_CALL 647
#define EXPRESSION_OP_FUNC__FORK 648
#define EXPRESSION_OP_FUNC__JOIN 649
#define EXPRESSION_OP_FUNC__DISABLE 650
#define EXPRESSION_OP_FUNC__REPEAT 651
#define EXPRESSION_OP_FUNC__EXPONENT 652
#define EXPRESSION_OP_FUNC__PASSIGN 653
#define EXPRESSION_OP_FUNC__MBIT_POS 654
#define EXPRESSION_OP_FUNC__MBIT_NEG 655
#define EXPRESSION_OP_FUNC__NEGATE 656
#define EXPRESSION_OP_FUNC__IINC 657
#define EXPRESSION_OP_FUNC__PINC 658
#define EXPRESSION_OP_FUNC__IDEC 659
#define EXPRESSION_OP_FUNC__PDEC 660
#define EXPRESSION_OP_FUNC__DLY_ASSIGN 661
#define EXPRESSION_OP_FUNC__DLY_OP 662
#define EXPRESSION_OP_FUNC__REPEAT_DLY 663
#define EXPRESSION_OP_FUNC__DIM 664
#define EXPRESSION_OP_FUNC__WAIT 665
#define EXPRESSION_OP_FUNC__FINISH 666
#define EXPRESSION_OP_FUNC__STOP 667
#define EXPRESSION_OPERATE 668
#define EXPRESSION_OPERATE_RECURSIVELY 669
#define EXPRESSION_IS_STATIC_ONLY 670
#define EXPRESSION_IS_ASSIGNED 671
#define EXPRESSION_IS_BIT_SELECT 672
#define EXPRESSION_IS_LAST_SELECT 673
#define EXPRESSION_IS_IN_RASSIGN 674
#define EXPRESSION_SET_ASSIGNED 675
#define EXPRESSION_SET_CHANGED 676
#define EXPRESSION_ASSIGN 677
#define EXPRESSION_DEALLOC 678
#define GEN_ITEM_STRINGIFY 679
#define GEN_ITEM_DISPLAY 680
#define GEN_ITEM_DISPLAY_BLOCK_HELPER 681
#define GEN_ITEM_DISPLAY_BLOCK 682
#define GEN_ITEM_COMPARE 683
#define GEN_ITEM_FIND 684
#define GEN_ITEM_REMOVE_IF_CONTAINS_EXPR_CALLING_STMT 685
#define GEN_ITEM_GET_GENVAR 686
#define GEN_ITEM_VARNAME_CONTAINS_GENVAR 687
#define GEN_ITEM_CALC_SIGNAL_NAME 688
#define GEN_ITEM_CREATE_EXPR 689
#define GEN_ITEM_CREATE_SIG 690
#define GEN_ITEM_CREATE_STMT 691
#define GEN_ITEM_CREATE_INST 692
#define GEN_ITEM_CREATE_TFN 693
#define GEN_ITEM_CREATE_BIND 694
#define GEN_ITEM_RESIZE_STMTS_AND_SIGS 695
#define GEN_ITEM_ASSIGN_IDS 696
#define GEN_ITEM_DB_WRITE 697
#define GEN_ITEM_DB_WRITE_EXPR_TREE 698
#define GEN_ITEM_CONNECT 699
#define GEN_ITEM_RESOLVE 700
#define GEN_ITEM_BIND 701
#define GENERATE_RESOLVE 702
#define GENERATE_REMOVE_STMT_HELPER 703
#define GENERATE_REMOVE_STMT 704
#define GEN_ITEM_DEALLOC 705
#define FSM_VAR_ADD 706
#define FSM_VAR_IS_OUTPUT_STATE 707
#define FSM_VAR_BIND_EXPR 708
#define FSM_VAR_ADD_EXPR 709
#define FSM_VAR_BIND_STMT 710
#define FSM_VAR_BIND_ADD 711
#define FSM_VAR_STMT_ADD 712
#define FSM_VAR_BIND 713
#define FSM_VAR_DEALLOC 714
#define FSM_VAR_REMOVE 715
#define FSM_VAR_CLEANUP 716
#define INSTANCE_DISPLAY_TREE_HELPER 717
#define INSTANCE_DISPLAY_TREE 718
#define INSTANCE_CREATE 719
#define INSTANCE_GEN_SCOPE 720
#define INSTANCE_COMPARE 721
#define INSTANCE_FIND_SCOPE 722
#define INSTANCE_FIND_BY_FUNIT 723
#define INSTANCE_FIND_SIGNAL_BY_EXCLUSION_ID 724
#define INSTANCE_FIND_EXPRESSION_BY_EXCLUSION_ID 725
#define INSTANCE_FIND_FSM_ARC_INDEX_BY_EXCLUSION_ID 726
#define INSTANCE_ADD_CHILD 727
#define INSTANCE_COPY 728
#define INSTANCE_ATTACH_CHILD 729
#define INSTANCE_PARSE_ADD 730
#define INSTANCE_RESOLVE_INST 731
#define INSTANCE_RESOLVE_HELPER 732
#define INSTANCE_RESOLVE 733
#define INSTANCE_READ_ADD 734
#define INSTANCE_DB_WRITE 735
#define INSTANCE_FLATTEN_HELPER 736
#define INSTANCE_FLATTEN 737
#define INSTANCE_REMOVE_STMT_BLKS_CALLING_STMT 738
#define INSTANCE_REMOVE_PARMS_WITH_EXPR 739
#define INSTANCE_DEALLOC_SINGLE 740
#define INSTANCE_OUTPUT_DUMPVARS 741
#define INSTANCE_DEALLOC_TREE 742
#define INSTANCE_DEALLOC 743
#define VECTOR_INIT 744
#define VECTOR_INT_R64 745
#define VECTOR_INT_R32 746
#define VECTOR_CREATE 747
#define VECTOR_COPY 748
#define VECTOR_COPY_RANGE 749
#define VECTOR_CLONE 750
#define VECTOR_DB_WRITE 751
#define VECTOR_DB_READ 752
#define VECTOR_DB_MERGE 753
#define VECTOR_MERGE 754
#define VECTOR_GET_EVAL_A 755
#define VECTOR_GET_EVAL_B 756
#define VECTOR_GET_EVAL_C 757
#define VECTOR_GET_EVAL_D 758
#define VECTOR_GET_EVAL_AB_COUNT 759
#define VECTOR_GET_EVAL_ABC_COUNT 760
#define VECTOR_GET_EVAL_ABCD_COUNT 761
#define VECTOR_GET_TOGGLE01_ULONG 762
#define VECTOR_GET_TOGGLE10_ULONG 763
#define VECTOR_DISPLAY_TOGGLE01_ULONG 764
#define VECTOR_DISPLAY_TOGGLE10_ULONG 765
#define VECTOR_TOGGLE_COUNT 766
#define VECTOR_MEM_RW_COUNT 767
#define VECTOR_SET_ASSIGNED 768
#define VECTOR_SET_COVERAGE_AND_ASSIGN 769
#define VECTOR_GET_SIGN_EXTEND_VECTOR_ULONG 770
#define VECTOR_SIGN_EXTEND_ULONG 771
#define VECTOR_LSHIFT_ULONG 772
#define VECTOR_RSHIFT_ULONG 773
#define VECTOR_SET_VALUE 774
#define VECTOR_PART_SELECT_PULL 775
#define VECTOR_PART_SELECT_PUSH 776
#define VECTOR_SET_UNARY_EVALS 777
#define VECTOR_SET_AND_COMB_EVALS 778
#define VECTOR_SET_OR_COMB_EVALS 779
#define VECTOR_SET_OTHER_COMB_EVALS 780
#define VECTOR_IS_UKNOWN 781
#define VECTOR_IS_NOT_ZERO 782
#define VECTOR_SET_TO_X 783
#define VECTOR_TO_INT 784
#define VECTOR_TO_UINT64 785
#define VECTOR_TO_REAL64 786
#define VECTOR_TO_SIM_TIME 787
#define VECTOR_FROM_INT 788
#define VECTOR_FROM_UINT64 789
#define VECTOR_FROM_REAL64 790
#define VECTOR_SET_STATIC 791
#define VECTOR_TO_STRING 792
#define VECTOR_FROM_STRING 793
#define VECTOR_VCD_ASSIGN 794
#define VECTOR_BITWISE_AND_OP 795
#define VECTOR_BITWISE_NAND_OP 796
#define VECTOR_BITWISE_OR_OP 797
#define VECTOR_BITWISE_NOR_OP 798
#define VECTOR_BITWISE_XOR_OP 799
#define VECTOR_BITWISE_NXOR_OP 800
#define VECTOR_OP_LT 801
#define VECTOR_OP_LE 802
#define VECTOR_OP_GT 803
#define VECTOR_OP_GE 804
#define VECTOR_OP_EQ 805
#define VECTOR_CEQ_ULONG 806
#define VECTOR_OP_CEQ 807
#define VECTOR_OP_CXEQ 808
#define VECTOR_OP_CZEQ 809
#define VECTOR_OP_NE 810
#define VECTOR_OP_CNE 811
#define VECTOR_OP_LOR 812
#define VECTOR_OP_LAND 813
#define VECTOR_OP_LSHIFT 814
#define VECTOR_OP_RSHIFT 815
#define VECTOR_OP_ARSHIFT 816
#define VECTOR_OP_ADD 817
#define VECTOR_OP_NEGATE 818
#define VECTOR_OP_SUBTRACT 819
#define VECTOR_OP_MULTIPLY 820
#define VECTOR_OP_DIVIDE 821
#define VECTOR_OP_MODULUS 822
#define VECTOR_OP_INC 823
#define VECTOR_OP_DEC 824
#define VECTOR_UNARY_INV 825
#define VECTOR_UNARY_AND 826
#define VECTOR_UNARY_NAND 827
#define VECTOR_UNARY_OR 828
#define VECTOR_UNARY_NOR 829
#define VECTOR_UNARY_XOR 830
#define VECTOR_UNARY_NXOR 831
#define VECTOR_UNARY_NOT 832
#define VECTOR_OP_EXPAND 833
#define VECTOR_OP_LIST 834
#define VECTOR_DEALLOC_VALUE 835
#define VECTOR_DEALLOC 836
#define SYMTABLE_ADD_SYM_SIG 837
#define SYMTABLE_INIT 838
#define SYMTABLE_CREATE 839
#define SYMTABLE_ADD 840
#define SYMTABLE_SET_VALUE 841
#define SYMTABLE_ASSIGN 842
#define SYMTABLE_DEALLOC 843
#define FUNIT_INIT 844
#define FUNIT_CREATE 845
#define FUNIT_GET_CURR_MODULE 846
#define FUNIT_GET_CURR_MODULE_SAFE 847
#define FUNIT_GET_CURR_FUNCTION 848
#define FUNIT_GET_CURR_TASK 849
#define FUNIT_GET_PORT_COUNT 850
#define FUNIT_FIND_PARAM 851
#define FUNIT_FIND_SIGNAL 852
#define FUNIT_REMOVE_STMT_BLKS_CALLING_STMT 853
#define FUNIT_GEN_TASK_FUNCTION_NAMEDBLOCK_NAME 854
#define FUNIT_SIZE_ELEMENTS 855
#define FUNIT_DB_WRITE 856
#define FUNIT_DB_READ 857
#define FUNIT_VERSION_DB_READ 858
#define FUNIT_DB_MERGE 859
#define FUNIT_MERGE 860
#define FUNIT_FLATTEN_NAME 861
#define FUNIT_FIND_BY_ID 862
#define FUNIT_IS_TOP_MODULE 863
#define FUNIT_IS_UNNAMED 864
#define FUNIT_IS_UNNAMED_CHILD_OF 865
#define FUNIT_IS_CHILD_OF 866
#define FUNIT_DISPLAY_SIGNALS 867
#define FUNIT_DISPLAY_EXPRESSIONS 868
#define STATEMENT_ADD_THREAD 869
#define FUNIT_PUSH_THREADS 870
#define STATEMENT_DELETE_THREAD 871
#define FUNIT_OUTPUT_DUMPVARS 872
#define FUNIT_CLEAN 873
#define FUNIT_DEALLOC 874
#define ARC_FIND_FROM_STATE 875
#define ARC_FIND_TO_STATE 876
#define ARC_FIND_ARC 877
#define ARC_FIND_ARC_BY_EXCLUSION_ID 878
#define ARC_CREATE 879
#define ARC_ADD 880
#define ARC_STATE_HITS 881
#define ARC_TRANSITION_HITS 882
#define ARC_TRANSITION_EXCLUDED 883
#define ARC_GET_STATS 884
#define ARC_DB_WRITE 885
#define ARC_DB_READ 886
#define ARC_DB_MERGE 887
#define ARC_MERGE 888
#define ARC_GET_STATES 889
#define ARC_GET_TRANSITIONS 890
#define ARC_ARE_ANY_EXCLUDED 891
#define ARC_DEALLOC 892
#define LEXER_KEYWORD_SYS_1995_CODE 893
#define FUNC_ITER_DISPLAY 894
#define FUNC_ITER_SORT 895
#define FUNC_ITER_COUNT_STMT_ITERS 896
#define FUNC_ITER_ADD_STMT_ITERS 897
#define FUNC_ITER_ADD_SIG_LINKS 898
#define FUNC_ITER_INIT 899
#define FUNC_ITER_GET_NEXT_STATEMENT 900
#define FUNC_ITER_GET_NEXT_SIGNAL 901
#define FUNC_ITER_DEALLOC 902
#define EXCLUDE_EXPR_ASSIGN_AND_RECALC 903
#define EXCLUDE_SIG_ASSIGN_AND_RECALC 904
#define EXCLUDE_ARC_ASSIGN_AND_RECALC 905
#define EXCLUDE_ADD_EXCLUDE_REASON 906
#define EXCLUDE_REMOVE_EXCLUDE_REASON 907
#define EXCLUDE_IS_LINE_EXCLUDED 908
#define EXCLUDE_SET_LINE_EXCLUDE 909
#define EXCLUDE_IS_TOGGLE_EXCLUDED 910
#define EXCLUDE_SET_TOGGLE_EXCLUDE 911
#define EXCLUDE_IS_COMB_EXCLUDED 912
#define EXCLUDE_SET_COMB_EXCLUDE 913
#define EXCLUDE_IS_FSM_EXCLUDED 914
#define EXCLUDE_SET_FSM_EXCLUDE 915
#define EXCLUDE_IS_ASSERT_EXCLUDED 916
#define EXCLUDE_SET_ASSERT_EXCLUDE 917
#define EXCLUDE_FIND_EXCLUDE_REASON 918
#define EXCLUDE_DB_WRITE 919
#define EXCLUDE_DB_READ 920
#define EXCLUDE_RESOLVE_REASON 921
#define EXCLUDE_DB_MERGE 922
#define EXCLUDE_FIND_SIGNAL 923
#define EXCLUDE_FIND_EXPRESSION 924
#define EXCLUDE_FIND_FSM_ARC 925
#define EXCLUDE_FORMAT_REASON 926
#define EXCLUDED_GET_MESSAGE 927
#define EXCLUDE_HANDLE_EXCLUDE_REASON 928
#define EXCLUDE_PRINT_EXCLUSION 929
#define EXCLUDE_LINE_FROM_ID 930
#define EXCLUDE_TOGGLE_FROM_ID 931
#define EXCLUDE_MEMORY_FROM_ID 932
#define EXCLUDE_EXPR_FROM_ID 933
#define EXCLUDE_FSM_FROM_ID 934
#define EXCLUDE_ASSERT_FROM_ID 935
#define EXCLUDE_APPLY_EXCLUSIONS 936
#define COMMAND_EXCLUDE 937
#define RACE_BLK_CREATE 938
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT_HELPER 939
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT 940
#define RACE_GET_HEAD_STATEMENT 941
#define RACE_FIND_HEAD_STATEMENT 942
#define RACE_CALC_STMT_BLK_TYPE 943
#define RACE_CALC_EXPR_ASSIGNMENT 944
#define RACE_CALC_ASSIGNMENTS 945
#define RACE_HANDLE_RACE_CONDITION 946
#define RACE_CHECK_ASSIGNMENT_TYPES 947
#define RACE_CHECK_ONE_BLOCK_ASSIGNMENT 948
#define RACE_CHECK_RACE_COUNT 949
#define RACE_CHECK_MODULES 950
#define RACE_DB_WRITE 951
#define RACE_DB_READ 952
#define RACE_GET_STATS 953
#define RACE_REPORT_SUMMARY 954
#define RACE_REPORT_VERBOSE 955
#define RACE_REPORT 956
#define RACE_COLLECT_LINES 957
#define RACE_BLK_DELETE_LIST 958
#define STATISTIC_CREATE 959
#define STATISTIC_IS_EMPTY 960
#define STATISTIC_DEALLOC 961
#define TCL_FUNC_GET_RACE_REASON_MSGS 962
#define TCL_FUNC_GET_FUNIT_LIST 963
#define TCL_FUNC_GET_INSTANCES 964
#define TCL_FUNC_GET_INSTANCE_LIST 965
#define TCL_FUNC_IS_FUNIT 966
#define TCL_FUNC_GET_FUNIT 967
#define TCL_FUNC_GET_INST 968
#define TCL_FUNC_GET_FUNIT_NAME 969
#define TCL_FUNC_GET_FILENAME 970
#define TCL_FUNC_INST_SCOPE 971
#define TCL_FUNC_GET_FUNIT_START_AND_END 972
#define TCL_FUNC_COLLECT_UNCOVERED_LINES 973
#define TCL_FUNC_COLLECT_COVERED_LINES 974
#define TCL_FUNC_COLLECT_RACE_LINES 975
#define TCL_FUNC_COLLECT_UNCOVERED_TOGGLES 976
#define TCL_FUNC_COLLECT_COVERED_TOGGLES 977
#define TCL_FUNC_COLLECT_UNCOVERED_MEMORIES 978
#define TCL_FUNC_COLLECT_COVERED_MEMORIES 979
#define TCL_FUNC_GET_TOGGLE_COVERAGE 980
#define TCL_FUNC_GET_MEMORY_COVERAGE 981
#define TCL_FUNC_COLLECT_UNCOVERED_COMBS 982
#define TCL_FUNC_COLLECT_COVERED_COMBS 983
#define TCL_FUNC_GET_COMB_EXPRESSION 984
#define TCL_FUNC_GET_COMB_COVERAGE 985
#define TCL_FUNC_COLLECT_UNCOVERED_FSMS 986
#define TCL_FUNC_COLLECT_COVERED_FSMS 987
#define TCL_FUNC_GET_FSM_COVERAGE 988
#define TCL_FUNC_COLLECT_UNCOVERED_ASSERTIONS 989
#define TCL_FUNC_COLLECT_COVERED_ASSERTIONS 990
#define TCL_FUNC_GET_ASSERT_COVERAGE 991
#define TCL_FUNC_OPEN_CDD 992
#define TCL_FUNC_CLOSE_CDD 993
#define TCL_FUNC_SAVE_CDD 994
#define TCL_FUNC_MERGE_CDD 995
#define TCL_FUNC_GET_LINE_SUMMARY 996
#define TCL_FUNC_GET_TOGGLE_SUMMARY 997
#define TCL_FUNC_GET_MEMORY_SUMMARY 998
#define TCL_FUNC_GET_COMB_SUMMARY 999
#define TCL_FUNC_GET_FSM_SUMMARY 1000
#define TCL_FUNC_GET_ASSERT_SUMMARY 1001
#define TCL_FUNC_PREPROCESS_VERILOG 1002
#define TCL_FUNC_GET_SCORE_PATH 1003
#define TCL_FUNC_GET_INCLUDE_PATHNAME 1004
#define TCL_FUNC_GET_GENERATION 1005
#define TCL_FUNC_SET_LINE_EXCLUDE 1006
#define TCL_FUNC_SET_TOGGLE_EXCLUDE 1007
#define TCL_FUNC_SET_MEMORY_EXCLUDE 1008
#define TCL_FUNC_SET_COMB_EXCLUDE 1009
#define TCL_FUNC_FSM_EXCLUDE 1010
#define TCL_FUNC_SET_ASSERT_EXCLUDE 1011
#define TCL_FUNC_GENERATE_REPORT 1012
#define TCL_FUNC_INITIALIZE 1013
#define STATIC_EXPR_GEN_UNARY 1014
#define STATIC_EXPR_GEN 1015
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_PRE 1016
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_POST 1017
#define STATIC_EXPR_DEALLOC 1018
#define VCDID 1019
#define VCD_CALLBACK 1020
#define LXT_PARSE 1021
#define COMMAND_MERGE 1022
#define LINE_GET_STATS 1023
#define LINE_COLLECT 1024
#define LINE_GET_FUNIT_SUMMARY 1025
#define LINE_GET_INST_SUMMARY 1026
#define LINE_DISPLAY_INSTANCE_SUMMARY 1027
#define LINE_INSTANCE_SUMMARY 1028
#define LINE_DISPLAY_FUNIT_SUMMARY 1029
#define LINE_FUNIT_SUMMARY 1030
#define LINE_DISPLAY_VERBOSE 1031
#define LINE_INSTANCE_VERBOSE 1032
#define LINE_FUNIT_VERBOSE 1033
#define LINE_REPORT 1034

extern profiler profiles[NUM_PROFILES];
#endif

extern unsigned int profile_index;

#endif

