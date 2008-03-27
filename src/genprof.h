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

#define NUM_PROFILES 864

#ifdef DEBUG
#define UNREGISTERED 0
#define OBFUSCATE_SET_MODE 1
#define OBFUSCATE_NAME 2
#define OBFUSCATE_DEALLOC 3
#define SYMTABLE_ADD_SYM_SIG 4
#define SYMTABLE_INIT 5
#define SYMTABLE_CREATE 6
#define SYMTABLE_ADD 7
#define SYMTABLE_SET_VALUE 8
#define SYMTABLE_ASSIGN 9
#define SYMTABLE_DEALLOC 10
#define MOD_PARM_FIND 11
#define MOD_PARM_FIND_EXPR_AND_REMOVE 12
#define MOD_PARM_ADD 13
#define INST_PARM_FIND 14
#define INST_PARM_ADD 15
#define INST_PARM_ADD_GENVAR 16
#define INST_PARM_BIND 17
#define DEFPARAM_ADD 18
#define DEFPARAM_DEALLOC 19
#define PARAM_FIND_AND_SET_EXPR_VALUE 20
#define PARAM_SET_SIG_SIZE 21
#define PARAM_SIZE_FUNCTION 22
#define PARAM_EXPR_EVAL 23
#define PARAM_HAS_OVERRIDE 24
#define PARAM_HAS_DEFPARAM 25
#define PARAM_RESOLVE_DECLARED 26
#define PARAM_RESOLVE_OVERRIDE 27
#define PARAM_RESOLVE 28
#define PARAM_DB_WRITE 29
#define MOD_PARM_DEALLOC 30
#define INST_PARM_DEALLOC 31
#define PARSE_READLINE 32
#define PARSE_DESIGN 33
#define PARSE_AND_SCORE_DUMPFILE 34
#define ARC_GET_ENTRY_WIDTH 35
#define ARC_SET_WIDTH 36
#define ARC_GET_WIDTH 37
#define ARC_SET_MAX_SIZE 38
#define ARC_GET_MAX_SIZE 39
#define ARC_SET_CURR_SIZE 40
#define ARC_GET_CURR_SIZE 41
#define ARC_SET_SUPPL 42
#define ARC_GET_SUPPL 43
#define ARC_SET_STATES 44
#define ARC_SET_ENTRY_SUPPL 45
#define ARC_GET_ENTRY_SUPPL 46
#define ARC_FIND 47
#define ARC_CREATE 48
#define ARC_ADD 49
#define ARC_COMPARE_STATES 50
#define ARC_COMPARE_ALL_STATES 51
#define ARC_STATE_TOTAL 52
#define ARC_STATE_HITS 53
#define ARC_TRANSITION_TOTAL 54
#define ARC_TRANSITION_HITS 55
#define ARC_GET_STATS 56
#define ARC_DB_WRITE 57
#define ARC_READ_GET_NEXT_VALUE 58
#define ARC_DB_READ 59
#define ARC_STATE_TO_STRING 60
#define ARC_DB_MERGE 61
#define ARC_GET_STATES 62
#define ARC_GET_TRANSITIONS 63
#define ARC_ARE_ANY_EXCLUDED 64
#define ARC_DEALLOC 65
#define TCL_FUNC_GET_RACE_REASON_MSGS 66
#define TCL_FUNC_GET_FUNIT_LIST 67
#define TCL_FUNC_GET_INSTANCES 68
#define TCL_FUNC_GET_INSTANCE_LIST 69
#define TCL_FUNC_GET_FILENAME 70
#define TCL_FUNC_GET_FUNIT_START_AND_END 71
#define TCL_FUNC_COLLECT_UNCOVERED_LINES 72
#define TCL_FUNC_COLLECT_COVERED_LINES 73
#define TCL_FUNC_COLLECT_RACE_LINES 74
#define TCL_FUNC_COLLECT_UNCOVERED_TOGGLES 75
#define TCL_FUNC_COLLECT_COVERED_TOGGLES 76
#define TCL_FUNC_COLLECT_MEMORIES 77
#define TCL_FUNC_GET_TOGGLE_COVERAGE 78
#define TCL_FUNC_GET_MEMORY_COVERAGE 79
#define TCL_FUNC_COLLECT_COMBS 80
#define TCL_FUNC_GET_COMB_EXPRESSION 81
#define TCL_FUNC_GET_COMB_COVERAGE 82
#define TCL_FUNC_COLLECT_FSMS 83
#define TCL_FUNC_GET_FSM_COVERAGE 84
#define TCL_FUNC_COLLECT_ASSERTIONS 85
#define TCL_FUNC_GET_ASSERT_COVERAGE 86
#define TCL_FUNC_OPEN_CDD 87
#define TCL_FUNC_CLOSE_CDD 88
#define TCL_FUNC_SAVE_CDD 89
#define TCL_FUNC_MERGE_CDD 90
#define TCL_FUNC_GET_LINE_SUMMARY 91
#define TCL_FUNC_GET_TOGGLE_SUMMARY 92
#define TCL_FUNC_GET_MEMORY_SUMMARY 93
#define TCL_FUNC_GET_COMB_SUMMARY 94
#define TCL_FUNC_GET_FSM_SUMMARY 95
#define TCL_FUNC_GET_ASSERT_SUMMARY 96
#define TCL_FUNC_PREPROCESS_VERILOG 97
#define TCL_FUNC_GET_SCORE_PATH 98
#define TCL_FUNC_GET_INCLUDE_PATHNAME 99
#define TCL_FUNC_GET_GENERATION 100
#define TCL_FUNC_SET_LINE_EXCLUDE 101
#define TCL_FUNC_SET_TOGGLE_EXCLUDE 102
#define TCL_FUNC_SET_MEMORY_EXCLUDE 103
#define TCL_FUNC_SET_COMB_EXCLUDE 104
#define TCL_FUNC_FSM_EXCLUDE 105
#define TCL_FUNC_SET_ASSERT_EXCLUDE 106
#define TCL_FUNC_GENERATE_REPORT 107
#define TCL_FUNC_INITIALIZE 108
#define ASSERTION_PARSE 109
#define ASSERTION_PARSE_ATTR 110
#define ASSERTION_GET_STATS 111
#define ASSERTION_DISPLAY_INSTANCE_SUMMARY 112
#define ASSERTION_INSTANCE_SUMMARY 113
#define ASSERTION_DISPLAY_FUNIT_SUMMARY 114
#define ASSERTION_FUNIT_SUMMARY 115
#define ASSERTION_DISPLAY_VERBOSE 116
#define ASSERTION_INSTANCE_VERBOSE 117
#define ASSERTION_FUNIT_VERBOSE 118
#define ASSERTION_REPORT 119
#define ASSERTION_GET_FUNIT_SUMMARY 120
#define ASSERTION_COLLECT 121
#define ASSERTION_GET_COVERAGE 122
#define ATTRIBUTE_CREATE 123
#define ATTRIBUTE_PARSE 124
#define ATTRIBUTE_DEALLOC 125
#define TOGGLE_GET_STATS 126
#define TOGGLE_COLLECT 127
#define TOGGLE_GET_COVERAGE 128
#define TOGGLE_GET_FUNIT_SUMMARY 129
#define TOGGLE_DISPLAY_INSTANCE_SUMMARY 130
#define TOGGLE_INSTANCE_SUMMARY 131
#define TOGGLE_DISPLAY_FUNIT_SUMMARY 132
#define TOGGLE_FUNIT_SUMMARY 133
#define TOGGLE_DISPLAY_VERBOSE 134
#define TOGGLE_INSTANCE_VERBOSE 135
#define TOGGLE_FUNIT_VERBOSE 136
#define TOGGLE_REPORT 137
#define VLERROR 138
#define VLWARN 139
#define PARSER_DEALLOC_SIG_RANGE 140
#define PARSER_COPY_CURR_RANGE 141
#define PARSER_COPY_RANGE_TO_CURR_RANGE 142
#define PARSER_EXPLICITLY_SET_CURR_RANGE 143
#define PARSER_IMPLICITLY_SET_CURR_RANGE 144
#define PARSER_CHECK_GENERATION 145
#define PERF_GEN_STATS 146
#define PERF_OUTPUT_MOD_STATS 147
#define PERF_OUTPUT_INST_REPORT_HELPER 148
#define PERF_OUTPUT_INST_REPORT 149
#define TREE_ADD 150
#define TREE_FIND 151
#define TREE_REMOVE 152
#define TREE_DEALLOC 153
#define CODEGEN_CREATE_EXPR_HELPER 154
#define CODEGEN_CREATE_EXPR 155
#define CODEGEN_GEN_EXPR 156
#define COMBINATION_CALC_DEPTH 157
#define COMBINATION_DOES_MULTI_EXP_NEED_UL 158
#define COMBINATION_MULTI_EXPR_CALC 159
#define COMBINATION_IS_EXPR_MULTI_NODE 160
#define COMBINATION_GET_TREE_STATS 161
#define COMBINATION_RESET_COUNTED_EXPRS 162
#define COMBINATION_RESET_COUNTED_EXPR_TREE 163
#define COMBINATION_GET_STATS 164
#define COMBINATION_GET_FUNIT_SUMMARY 165
#define COMBINATION_DISPLAY_INSTANCE_SUMMARY 166
#define COMBINATION_INSTANCE_SUMMARY 167
#define COMBINATION_DISPLAY_FUNIT_SUMMARY 168
#define COMBINATION_FUNIT_SUMMARY 169
#define COMBINATION_DRAW_LINE 170
#define COMBINATION_DRAW_CENTERED_LINE 171
#define COMBINATION_UNDERLINE_TREE 172
#define COMBINATION_PREP_LINE 173
#define COMBINATION_UNDERLINE 174
#define COMBINATION_UNARY 175
#define COMBINATION_EVENT 176
#define COMBINATION_TWO_VARS 177
#define COMBINATION_MULTI_VAR_EXPRS 178
#define COMBINATION_MULTI_EXPR_OUTPUT_LENGTH 179
#define COMBINATION_MULTI_EXPR_OUTPUT 180
#define COMBINATION_MULTI_VARS 181
#define COMBINATION_GET_MISSED_EXPR 182
#define COMBINATION_LIST_MISSED 183
#define COMBINATION_OUTPUT_EXPR 184
#define COMBINATION_DISPLAY_VERBOSE 185
#define COMBINATION_INSTANCE_VERBOSE 186
#define COMBINATION_FUNIT_VERBOSE 187
#define COMBINATION_COLLECT 188
#define COMBINATION_GET_EXCLUDE_LIST 189
#define COMBINATION_GET_EXPRESSION 190
#define COMBINATION_GET_COVERAGE 191
#define COMBINATION_REPORT 192
#define SET_OUTPUT_SUPPRESSION 193
#define CHECK_OPTION_VALUE 194
#define IS_VARIABLE 195
#define IS_FUNC_UNIT 196
#define IS_LEGAL_FILENAME 197
#define GET_BASENAME 198
#define GET_DIRNAME 199
#define DIRECTORY_EXISTS 200
#define DIRECTORY_LOAD 201
#define FILE_EXISTS 202
#define UTIL_READLINE 203
#define SUBSTITUTE_ENV_VARS 204
#define SCOPE_EXTRACT_FRONT 205
#define SCOPE_EXTRACT_BACK 206
#define SCOPE_EXTRACT_SCOPE 207
#define SCOPE_GEN_PRINTABLE 208
#define SCOPE_COMPARE 209
#define SCOPE_LOCAL 210
#define CONVERT_FILE_TO_MODULE 211
#define GET_NEXT_VFILE 212
#define GEN_SPACE 213
#define GET_FUNIT_TYPE 214
#define CALC_MISS_PERCENT 215
#define DB_CLOSE 216
#define DB_CHECK_FOR_TOP_MODULE 217
#define DB_WRITE 218
#define DB_READ 219
#define DB_SCALE_TO_PRECISION 220
#define DB_CREATE_UNNAMED_SCOPE 221
#define DB_IS_UNNAMED_SCOPE 222
#define DB_SET_TIMESCALE 223
#define DB_GET_CURR_FUNIT 224
#define DB_ADD_INSTANCE 225
#define DB_ADD_MODULE 226
#define DB_END_MODULE 227
#define DB_ADD_FUNCTION_TASK_NAMEDBLOCK 228
#define DB_END_FUNCTION_TASK_NAMEDBLOCK 229
#define DB_ADD_DECLARED_PARAM 230
#define DB_ADD_OVERRIDE_PARAM 231
#define DB_ADD_VECTOR_PARAM 232
#define DB_ADD_DEFPARAM 233
#define DB_ADD_SIGNAL 234
#define DB_ADD_ENUM 235
#define DB_END_ENUM_LIST 236
#define DB_ADD_TYPEDEF 237
#define DB_FIND_SIGNAL 238
#define DB_ADD_GEN_ITEM_BLOCK 239
#define DB_FIND_GEN_ITEM 240
#define DB_FIND_TYPEDEF 241
#define DB_GET_CURR_GEN_BLOCK 242
#define DB_CURR_SIGNAL_COUNT 243
#define DB_CREATE_EXPRESSION 244
#define DB_BIND_EXPR_TREE 245
#define DB_CREATE_EXPR_FROM_STATIC 246
#define DB_ADD_EXPRESSION 247
#define DB_CREATE_SENSITIVITY_LIST 248
#define DB_PARALLELIZE_STATEMENT 249
#define DB_CREATE_STATEMENT 250
#define DB_ADD_STATEMENT 251
#define DB_REMOVE_STATEMENT_FROM_CURRENT_FUNIT 252
#define DB_REMOVE_STATEMENT 253
#define DB_CONNECT_STATEMENT_TRUE 254
#define DB_CONNECT_STATEMENT_FALSE 255
#define DB_GEN_ITEM_CONNECT_TRUE 256
#define DB_GEN_ITEM_CONNECT_FALSE 257
#define DB_GEN_ITEM_CONNECT 258
#define DB_STATEMENT_CONNECT 259
#define DB_CREATE_ATTR_PARAM 260
#define DB_PARSE_ATTRIBUTE 261
#define DB_REMOVE_STMT_BLKS_CALLING_STATEMENT 262
#define DB_GEN_CURR_INST_SCOPE 263
#define DB_SYNC_CURR_INSTANCE 264
#define DB_SET_VCD_SCOPE 265
#define DB_VCD_UPSCOPE 266
#define DB_ASSIGN_SYMBOL 267
#define DB_SET_SYMBOL_CHAR 268
#define DB_SET_SYMBOL_STRING 269
#define DB_DO_TIMESTEP 270
#define VCD_PARSE_DEF_IGNORE 271
#define VCD_PARSE_DEF_VAR 272
#define VCD_PARSE_DEF_SCOPE 273
#define VCD_PARSE_DEF 274
#define VCD_PARSE_SIM_VECTOR 275
#define VCD_PARSE_SIM_IGNORE 276
#define VCD_PARSE_SIM 277
#define VCD_PARSE 278
#define RACE_BLK_CREATE 279
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT_HELPER 280
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT 281
#define RACE_GET_HEAD_STATEMENT 282
#define RACE_FIND_HEAD_STATEMENT 283
#define RACE_CALC_STMT_BLK_TYPE 284
#define RACE_CALC_EXPR_ASSIGNMENT 285
#define RACE_CALC_ASSIGNMENTS 286
#define RACE_HANDLE_RACE_CONDITION 287
#define RACE_CHECK_ASSIGNMENT_TYPES 288
#define RACE_CHECK_ONE_BLOCK_ASSIGNMENT 289
#define RACE_CHECK_RACE_COUNT 290
#define RACE_CHECK_MODULES 291
#define RACE_DB_WRITE 292
#define RACE_DB_READ 293
#define RACE_GET_STATS 294
#define RACE_REPORT_SUMMARY 295
#define RACE_REPORT_VERBOSE 296
#define RACE_REPORT 297
#define RACE_COLLECT_LINES 298
#define RACE_BLK_DELETE_LIST 299
#define ENUMERATE_ADD_ITEM 300
#define ENUMERATE_END_LIST 301
#define ENUMERATE_RESOLVE 302
#define ENUMERATE_DEALLOC 303
#define ENUMERATE_DEALLOC_LIST 304
#define REENTRANT_COUNT_AFU_BITS 305
#define REENTRANT_STORE_DATA_BITS 306
#define REENTRANT_RESTORE_DATA_BITS 307
#define REENTRANT_CREATE 308
#define REENTRANT_DEALLOC 309
#define EXPRESSION_CREATE_VALUE 310
#define EXPRESSION_CREATE 311
#define EXPRESSION_SET_VALUE 312
#define EXPRESSION_SET_SIGNED 313
#define EXPRESSION_RESIZE 314
#define EXPRESSION_GET_ID 315
#define EXPRESSION_GET_FIRST_LINE_EXPR 316
#define EXPRESSION_GET_LAST_LINE_EXPR 317
#define EXPRESSION_GET_CURR_DIMENSION 318
#define EXPRESSION_FIND_RHS_SIGS 319
#define EXPRESSION_FIND_PARAMS 320
#define EXPRESSION_FIND_ULINE_ID 321
#define EXPRESSION_FIND_EXPR 322
#define EXPRESSION_CONTAINS_EXPR_CALLING_STMT 323
#define EXPRESSION_GET_ROOT_STATEMENT 324
#define EXPRESSION_ASSIGN_EXPR_IDS 325
#define EXPRESSION_DB_WRITE 326
#define EXPRESSION_DB_WRITE_TREE 327
#define EXPRESSION_DB_READ 328
#define EXPRESSION_DB_MERGE 329
#define EXPRESSION_STRING_OP 330
#define EXPRESSION_STRING 331
#define EXPRESSION_OP_FUNC__XOR 332
#define EXPRESSION_OP_FUNC__MULTIPLY 333
#define EXPRESSION_OP_FUNC__DIVIDE 334
#define EXPRESSION_OP_FUNC__MOD 335
#define EXPRESSION_OP_FUNC__ADD 336
#define EXPRESSION_OP_FUNC__SUBTRACT 337
#define EXPRESSION_OP_FUNC__AND 338
#define EXPRESSION_OP_FUNC__OR 339
#define EXPRESSION_OP_FUNC__NAND 340
#define EXPRESSION_OP_FUNC__NOR 341
#define EXPRESSION_OP_FUNC__NXOR 342
#define EXPRESSION_OP_FUNC__LT 343
#define EXPRESSION_OP_FUNC__GT 344
#define EXPRESSION_OP_FUNC__LSHIFT 345
#define EXPRESSION_OP_FUNC__RSHIFT 346
#define EXPRESSION_OP_FUNC__ARSHIFT 347
#define EXPRESSION_OP_FUNC__EQ 348
#define EXPRESSION_OP_FUNC__CEQ 349
#define EXPRESSION_OP_FUNC__LE 350
#define EXPRESSION_OP_FUNC__GE 351
#define EXPRESSION_OP_FUNC__NE 352
#define EXPRESSION_OP_FUNC__CNE 353
#define EXPRESSION_OP_FUNC__LOR 354
#define EXPRESSION_OP_FUNC__LAND 355
#define EXPRESSION_OP_FUNC__COND 356
#define EXPRESSION_OP_FUNC__COND_SEL 357
#define EXPRESSION_OP_FUNC__UINV 358
#define EXPRESSION_OP_FUNC__UAND 359
#define EXPRESSION_OP_FUNC__UNOT 360
#define EXPRESSION_OP_FUNC__UOR 361
#define EXPRESSION_OP_FUNC__UXOR 362
#define EXPRESSION_OP_FUNC__UNAND 363
#define EXPRESSION_OP_FUNC__UNOR 364
#define EXPRESSION_OP_FUNC__UNXOR 365
#define EXPRESSION_OP_FUNC__NULL 366
#define EXPRESSION_OP_FUNC__SIG 367
#define EXPRESSION_OP_FUNC__SBIT 368
#define EXPRESSION_OP_FUNC__MBIT 369
#define EXPRESSION_OP_FUNC__EXPAND 370
#define EXPRESSION_OP_FUNC__LIST 371
#define EXPRESSION_OP_FUNC__CONCAT 372
#define EXPRESSION_OP_FUNC__PEDGE 373
#define EXPRESSION_OP_FUNC__NEDGE 374
#define EXPRESSION_OP_FUNC__AEDGE 375
#define EXPRESSION_OP_FUNC__EOR 376
#define EXPRESSION_OP_FUNC__SLIST 377
#define EXPRESSION_OP_FUNC__DELAY 378
#define EXPRESSION_OP_FUNC__TRIGGER 379
#define EXPRESSION_OP_FUNC__CASE 380
#define EXPRESSION_OP_FUNC__CASEX 381
#define EXPRESSION_OP_FUNC__CASEZ 382
#define EXPRESSION_OP_FUNC__DEFAULT 383
#define EXPRESSION_OP_FUNC__BASSIGN 384
#define EXPRESSION_OP_FUNC__FUNC_CALL 385
#define EXPRESSION_OP_FUNC__TASK_CALL 386
#define EXPRESSION_OP_FUNC__NB_CALL 387
#define EXPRESSION_OP_FUNC__FORK 388
#define EXPRESSION_OP_FUNC__JOIN 389
#define EXPRESSION_OP_FUNC__DISABLE 390
#define EXPRESSION_OP_FUNC__REPEAT 391
#define EXPRESSION_OP_FUNC__EXPONENT 392
#define EXPRESSION_OP_FUNC__PASSIGN 393
#define EXPRESSION_OP_FUNC__MBIT_POS 394
#define EXPRESSION_OP_FUNC__MBIT_NEG 395
#define EXPRESSION_OP_FUNC__NEGATE 396
#define EXPRESSION_OP_FUNC__IINC 397
#define EXPRESSION_OP_FUNC__PINC 398
#define EXPRESSION_OP_FUNC__IDEC 399
#define EXPRESSION_OP_FUNC__PDEC 400
#define EXPRESSION_OP_FUNC__DLY_ASSIGN 401
#define EXPRESSION_OP_FUNC__DLY_OP 402
#define EXPRESSION_OP_FUNC__REPEAT_DLY 403
#define EXPRESSION_OP_FUNC__WAIT 404
#define EXPRESSION_OP_FUNC__FINISH 405
#define EXPRESSION_OP_FUNC__STOP 406
#define EXPRESSION_OPERATE 407
#define EXPRESSION_OPERATE_RECURSIVELY 408
#define EXPRESSION_IS_STATIC_ONLY 409
#define EXPRESSION_IS_ASSIGNED 410
#define EXPRESSION_IS_BIT_SELECT 411
#define EXPRESSION_IS_LAST_SELECT 412
#define EXPRESSION_IS_IN_RASSIGN 413
#define EXPRESSION_SET_ASSIGNED 414
#define EXPRESSION_ASSIGN 415
#define EXPRESSION_DEALLOC 416
#define FSM_CREATE 417
#define FSM_ADD_ARC 418
#define FSM_CREATE_TABLES 419
#define FSM_DB_WRITE 420
#define FSM_DB_READ 421
#define FSM_DB_MERGE 422
#define FSM_TABLE_SET 423
#define FSM_GET_STATS 424
#define FSM_GET_FUNIT_SUMMARY 425
#define FSM_GATHER_SIGNALS 426
#define FSM_COLLECT 427
#define FSM_GET_COVERAGE 428
#define FSM_DISPLAY_INSTANCE_SUMMARY 429
#define FSM_INSTANCE_SUMMARY 430
#define FSM_DISPLAY_FUNIT_SUMMARY 431
#define FSM_FUNIT_SUMMARY 432
#define FSM_DISPLAY_STATE_VERBOSE 433
#define FSM_DISPLAY_ARC_VERBOSE 434
#define FSM_DISPLAY_VERBOSE 435
#define FSM_INSTANCE_VERBOSE 436
#define FSM_FUNIT_VERBOSE 437
#define FSM_REPORT 438
#define FSM_DEALLOC 439
#define SYM_VALUE_STORE 440
#define ADD_SYM_VALUES_TO_SIM 441
#define COVERED_VALUE_CHANGE 442
#define COVERED_END_OF_SIM 443
#define COVERED_CB_ERROR_HANDLER 444
#define GEN_NEXT_SYMBOL 445
#define COVERED_CREATE_VALUE_CHANGE_CB 446
#define COVERED_PARSE_TASK_FUNC 447
#define COVERED_PARSE_SIGNALS 448
#define COVERED_PARSE_INSTANCE 449
#define COVERED_SIM_CALLTF 450
#define COVERED_REGISTER 451
#define REPORT_PARSE_METRICS 452
#define REPORT_PARSE_ARGS 453
#define REPORT_GATHER_INSTANCE_STATS 454
#define REPORT_GATHER_FUNIT_STATS 455
#define REPORT_PRINT_HEADER 456
#define REPORT_GENERATE 457
#define REPORT_READ_CDD_AND_READY 458
#define REPORT_CLOSE_CDD 459
#define REPORT_SAVE_CDD 460
#define COMMAND_REPORT 461
#define FSM_ARG_PARSE_STATE 462
#define FSM_ARG_PARSE 463
#define FSM_ARG_PARSE_VALUE 464
#define FSM_ARG_PARSE_TRANS 465
#define FSM_ARG_PARSE_ATTR 466
#define FSM_VAR_ADD 467
#define FSM_VAR_IS_OUTPUT_STATE 468
#define FSM_VAR_BIND_EXPR 469
#define FSM_VAR_ADD_EXPR 470
#define FSM_VAR_BIND_STMT 471
#define FSM_VAR_BIND_ADD 472
#define FSM_VAR_STMT_ADD 473
#define FSM_VAR_BIND 474
#define FSM_VAR_DEALLOC 475
#define FSM_VAR_REMOVE 476
#define SCOPE_FIND_FUNIT_FROM_SCOPE 477
#define SCOPE_FIND_PARAM 478
#define SCOPE_FIND_SIGNAL 479
#define SCOPE_FIND_TASK_FUNCTION_NAMEDBLOCK 480
#define SCOPE_GET_PARENT_FUNIT 481
#define SCOPE_GET_PARENT_MODULE 482
#define FUNC_ITER_DISPLAY 483
#define FUNC_ITER_SORT 484
#define FUNC_ITER_COUNT_STMT_ITERS 485
#define FUNC_ITER_ADD_STMT_ITERS 486
#define FUNC_ITER_INIT 487
#define FUNC_ITER_GET_NEXT_STATEMENT 488
#define FUNC_ITER_DEALLOC 489
#define SCORE_GENERATE_TOP_VPI_MODULE 490
#define SCORE_GENERATE_PLI_TAB_FILE 491
#define READ_COMMAND_FILE 492
#define SCORE_PARSE_DEFINE 493
#define SCORE_ADD_ARG 494
#define SCORE_PARSE_ARGS 495
#define COMMAND_SCORE 496
#define FUNIT_INIT 497
#define FUNIT_CREATE 498
#define FUNIT_GET_CURR_MODULE 499
#define FUNIT_GET_CURR_MODULE_SAFE 500
#define FUNIT_GET_CURR_FUNCTION 501
#define FUNIT_GET_CURR_TASK 502
#define FUNIT_GET_PORT_COUNT 503
#define FUNIT_FIND_PARAM 504
#define FUNIT_FIND_SIGNAL 505
#define FUNIT_REMOVE_STMT_BLKS_CALLING_STMT 506
#define FUNIT_GEN_TASK_FUNCTION_NAMEDBLOCK_NAME 507
#define FUNIT_SIZE_ELEMENTS 508
#define FUNIT_DB_WRITE 509
#define FUNIT_DB_READ 510
#define FUNIT_DB_MERGE 511
#define FUNIT_FLATTEN_NAME 512
#define FUNIT_FIND_BY_ID 513
#define FUNIT_IS_TOP_MODULE 514
#define FUNIT_IS_UNNAMED 515
#define FUNIT_IS_UNNAMED_CHILD_OF 516
#define FUNIT_IS_CHILD_OF 517
#define FUNIT_DISPLAY_SIGNALS 518
#define FUNIT_DISPLAY_EXPRESSIONS 519
#define STATEMENT_ADD_THREAD 520
#define FUNIT_PUSH_THREADS 521
#define STATEMENT_DELETE_THREAD 522
#define FUNIT_CLEAN 523
#define FUNIT_DEALLOC 524
#define SEARCH_INIT 525
#define SEARCH_ADD_INCLUDE_PATH 526
#define SEARCH_ADD_DIRECTORY_PATH 527
#define SEARCH_ADD_FILE 528
#define SEARCH_ADD_NO_SCORE_FUNIT 529
#define SEARCH_ADD_EXTENSIONS 530
#define SEARCH_FREE_LISTS 531
#define GEN_ITEM_STRINGIFY 532
#define GEN_ITEM_DISPLAY 533
#define GEN_ITEM_DISPLAY_BLOCK_HELPER 534
#define GEN_ITEM_DISPLAY_BLOCK 535
#define GEN_ITEM_COMPARE 536
#define GEN_ITEM_FIND 537
#define GEN_ITEM_REMOVE_IF_CONTAINS_EXPR_CALLING_STMT 538
#define GEN_ITEM_GET_GENVAR 539
#define GEN_ITEM_VARNAME_CONTAINS_GENVAR 540
#define GEN_ITEM_CALC_SIGNAL_NAME 541
#define GEN_ITEM_CREATE_EXPR 542
#define GEN_ITEM_CREATE_SIG 543
#define GEN_ITEM_CREATE_STMT 544
#define GEN_ITEM_CREATE_INST 545
#define GEN_ITEM_CREATE_TFN 546
#define GEN_ITEM_CREATE_BIND 547
#define GEN_ITEM_RESIZE_STMTS_AND_SIGS 548
#define GEN_ITEM_ASSIGN_EXPR_IDS 549
#define GEN_ITEM_DB_WRITE 550
#define GEN_ITEM_DB_WRITE_EXPR_TREE 551
#define GEN_ITEM_CONNECT 552
#define GEN_ITEM_RESOLVE 553
#define GEN_ITEM_BIND 554
#define GENERATE_RESOLVE 555
#define GENERATE_REMOVE_STMT_HELPER 556
#define GENERATE_REMOVE_STMT 557
#define GEN_ITEM_DEALLOC 558
#define SIM_CURRENT_THREAD 559
#define SIM_THREAD_POP_HEAD 560
#define SIM_THREAD_INSERT_INTO_DELAY_QUEUE 561
#define SIM_THREAD_PUSH 562
#define SIM_EXPR_CHANGED 563
#define SIM_EXPR_CHANGED_A 564
#define SIM_CREATE_THREAD 565
#define SIM_ADD_THREAD 566
#define SIM_KILL_THREAD 567
#define SIM_KILL_THREAD_WITH_FUNIT 568
#define SIM_ADD_STATICS 569
#define SIM_EXPRESSION 570
#define SIM_THREAD 571
#define SIM_SIMULATE 572
#define SIM_INITIALIZE 573
#define SIM_STOP 574
#define SIM_FINISH 575
#define SIM_DEALLOC 576
#define STATISTIC_CREATE 577
#define STATISTIC_MERGE 578
#define STATISTIC_IS_EMPTY 579
#define STATISTIC_DEALLOC 580
#define FUNIT_GET_LIST 581
#define FUNIT_GET_FILENAME 582
#define FUNIT_GET_START_AND_END_LINES 583
#define VSIGNAL_INIT 584
#define VSIGNAL_CREATE 585
#define VSIGNAL_CREATE_VEC 586
#define VSIGNAL_DUPLICATE 587
#define VSIGNAL_DB_WRITE 588
#define VSIGNAL_DB_READ 589
#define VSIGNAL_DB_MERGE 590
#define VSIGNAL_PROPAGATE 591
#define VSIGNAL_VCD_ASSIGN 592
#define VSIGNAL_ADD_EXPRESSION 593
#define VSIGNAL_FROM_STRING 594
#define VSIGNAL_CALC_WIDTH_FOR_EXPR 595
#define VSIGNAL_CALC_LSB_FOR_EXPR 596
#define VSIGNAL_DEALLOC 597
#define INFO_INITIALIZE 598
#define INFO_DB_WRITE 599
#define INFO_DB_READ 600
#define ARGS_DB_READ 601
#define INFO_DEALLOC 602
#define STATEMENT_CREATE 603
#define STATEMENT_QUEUE_ADD 604
#define STATEMENT_QUEUE_COMPARE 605
#define STATEMENT_SIZE_ELEMENTS 606
#define STATEMENT_DB_WRITE 607
#define STATEMENT_DB_WRITE_TREE 608
#define STATEMENT_DB_WRITE_EXPR_TREE 609
#define STATEMENT_DB_READ 610
#define STATEMENT_ASSIGN_EXPR_IDS 611
#define STATEMENT_CONNECT 612
#define STATEMENT_GET_LAST_LINE_HELPER 613
#define STATEMENT_GET_LAST_LINE 614
#define STATEMENT_FIND_RHS_SIGS 615
#define STATEMENT_FIND_HEAD_STATEMENT 616
#define STATEMENT_FIND_STATEMENT 617
#define STATEMENT_CONTAINS_EXPR_CALLING_STMT 618
#define STATEMENT_DEALLOC_RECURSIVE 619
#define STATEMENT_DEALLOC 620
#define INSTANCE_DISPLAY_TREE_HELPER 621
#define INSTANCE_DISPLAY_TREE 622
#define INSTANCE_CREATE 623
#define INSTANCE_GEN_SCOPE 624
#define INSTANCE_COMPARE 625
#define INSTANCE_FIND_SCOPE 626
#define INSTANCE_FIND_BY_FUNIT 627
#define INSTANCE_ADD_CHILD 628
#define INSTANCE_COPY 629
#define INSTANCE_ATTACH_CHILD 630
#define INSTANCE_PARSE_ADD 631
#define INSTANCE_RESOLVE_INST 632
#define INSTANCE_RESOLVE_HELPER 633
#define INSTANCE_RESOLVE 634
#define INSTANCE_READ_ADD 635
#define INSTANCE_DB_WRITE 636
#define INSTANCE_FLATTEN_HELPER 637
#define INSTANCE_FLATTEN 638
#define INSTANCE_REMOVE_STMT_BLKS_CALLING_STMT 639
#define INSTANCE_REMOVE_PARMS_WITH_EXPR 640
#define INSTANCE_DEALLOC_SINGLE 641
#define INSTANCE_DEALLOC_TREE 642
#define INSTANCE_DEALLOC 643
#define STMT_ITER_RESET 644
#define STMT_ITER_COPY 645
#define STMT_ITER_NEXT 646
#define STMT_ITER_REVERSE 647
#define STMT_ITER_FIND_HEAD 648
#define STMT_ITER_GET_NEXT_IN_ORDER 649
#define STMT_ITER_GET_LINE_BEFORE 650
#define STATIC_EXPR_GEN_UNARY 651
#define STATIC_EXPR_GEN 652
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_PRE 653
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_POST 654
#define STATIC_EXPR_DEALLOC 655
#define PARSER_PORT_DECLARATION_A 656
#define PARSER_PORT_DECLARATION_B 657
#define PARSER_PORT_DECLARATION_C 658
#define PARSER_STATIC_EXPR_PRIMARY_A 659
#define PARSER_STATIC_EXPR_PRIMARY_B 660
#define PARSER_EXPRESSION_LIST_A 661
#define PARSER_EXPRESSION_LIST_B 662
#define PARSER_EXPRESSION_LIST_C 663
#define PARSER_EXPRESSION_LIST_D 664
#define PARSER_IDENTIFIER_A 665
#define PARSER_GENERATE_CASE_ITEM_A 666
#define PARSER_GENERATE_CASE_ITEM_B 667
#define PARSER_GENERATE_CASE_ITEM_C 668
#define PARSER_STATEMENT_BEGIN_A 669
#define PARSER_STATEMENT_FORK_A 670
#define PARSER_STATEMENT_FOR_A 671
#define PARSER_CASE_ITEM_A 672
#define PARSER_CASE_ITEM_B 673
#define PARSER_CASE_ITEM_C 674
#define PARSER_DELAY_VALUE_A 675
#define PARSER_DELAY_VALUE_B 676
#define PARSER_PARAMETER_VALUE_BYNAME_A 677
#define PARSER_GATE_INSTANCE_A 678
#define PARSER_GATE_INSTANCE_B 679
#define PARSER_GATE_INSTANCE_C 680
#define PARSER_GATE_INSTANCE_D 681
#define PARSER_LIST_OF_NAMES_A 682
#define PARSER_LIST_OF_NAMES_B 683
#define LINE_GET_STATS 684
#define LINE_COLLECT 685
#define LINE_GET_FUNIT_SUMMARY 686
#define LINE_DISPLAY_INSTANCE_SUMMARY 687
#define LINE_INSTANCE_SUMMARY 688
#define LINE_DISPLAY_FUNIT_SUMMARY 689
#define LINE_FUNIT_SUMMARY 690
#define LINE_DISPLAY_VERBOSE 691
#define LINE_INSTANCE_VERBOSE 692
#define LINE_FUNIT_VERBOSE 693
#define LINE_REPORT 694
#define STR_LINK_ADD 695
#define STMT_LINK_ADD_HEAD 696
#define STMT_LINK_ADD_TAIL 697
#define STMT_LINK_MERGE 698
#define EXP_LINK_ADD 699
#define SIG_LINK_ADD 700
#define FSM_LINK_ADD 701
#define FUNIT_LINK_ADD 702
#define GITEM_LINK_ADD 703
#define INST_LINK_ADD 704
#define STR_LINK_FIND 705
#define STMT_LINK_FIND 706
#define EXP_LINK_FIND 707
#define SIG_LINK_FIND 708
#define FSM_LINK_FIND 709
#define FUNIT_LINK_FIND 710
#define GITEM_LINK_FIND 711
#define INST_LINK_FIND_BY_SCOPE 712
#define INST_LINK_FIND_BY_FUNIT 713
#define STR_LINK_REMOVE 714
#define EXP_LINK_REMOVE 715
#define GITEM_LINK_REMOVE 716
#define FUNIT_LINK_REMOVE 717
#define INST_LINK_FLATTEN 718
#define STR_LINK_DELETE_LIST 719
#define STMT_LINK_UNLINK 720
#define STMT_LINK_DELETE_LIST 721
#define EXP_LINK_DELETE_LIST 722
#define SIG_LINK_DELETE_LIST 723
#define FSM_LINK_DELETE_LIST 724
#define FUNIT_LINK_DELETE_LIST 725
#define GITEM_LINK_DELETE_LIST 726
#define INST_LINK_DELETE_LIST 727
#define VCDID 728
#define VCD_CALLBACK 729
#define LXT_PARSE 730
#define LXT2_RD_EXPAND_INTEGER_TO_BITS 731
#define LXT2_RD_EXPAND_BITS_TO_INTEGER 732
#define LXT2_RD_ITER_RADIX 733
#define LXT2_RD_ITER_RADIX0 734
#define LXT2_RD_BUILD_RADIX 735
#define LXT2_RD_REGENERATE_PROCESS_MASK 736
#define LXT2_RD_PROCESS_BLOCK 737
#define LXT2_RD_INIT 738
#define LXT2_RD_CLOSE 739
#define LXT2_RD_GET_FACNAME 740
#define LXT2_RD_ITER_BLOCKS 741
#define LXT2_RD_LIMIT_TIME_RANGE 742
#define LXT2_RD_UNLIMIT_TIME_RANGE 743
#define MEMORY_GET_STAT 744
#define MEMORY_GET_STATS 745
#define MEMORY_GET_FUNIT_SUMMARY 746
#define MEMORY_CREATE_PDIM_BIT_ARRAY 747
#define MEMORY_GET_MEM_COVERAGE 748
#define MEMORY_GET_COVERAGE 749
#define MEMORY_COLLECT 750
#define MEMORY_DISPLAY_TOGGLE_INSTANCE_SUMMARY 751
#define MEMORY_TOGGLE_INSTANCE_SUMMARY 752
#define MEMORY_DISPLAY_AE_INSTANCE_SUMMARY 753
#define MEMORY_AE_INSTANCE_SUMMARY 754
#define MEMORY_DISPLAY_TOGGLE_FUNIT_SUMMARY 755
#define MEMORY_TOGGLE_FUNIT_SUMMARY 756
#define MEMORY_DISPLAY_AE_FUNIT_SUMMARY 757
#define MEMORY_AE_FUNIT_SUMMARY 758
#define MEMORY_DISPLAY_MEMORY 759
#define MEMORY_DISPLAY_VERBOSE 760
#define MEMORY_INSTANCE_VERBOSE 761
#define MEMORY_FUNIT_VERBOSE 762
#define MEMORY_REPORT 763
#define COMMAND_MERGE 764
#define OVL_IS_ASSERTION_NAME 765
#define OVL_IS_ASSERTION_MODULE 766
#define OVL_IS_COVERAGE_POINT 767
#define OVL_ADD_ASSERTIONS_TO_NO_SCORE_LIST 768
#define OVL_GET_FNIT_STATS 769
#define OVL_GET_COVERAGE_POINT 770
#define OVL_DISPLAY_VERBOSE 771
#define OVL_COLLECT 772
#define OVL_GET_COVERAGE 773
#define STRUCT_UNION_LENGTH 774
#define STRUCT_UNION_ADD_MEMBER 775
#define STRUCT_UNION_ADD_MEMBER_VOID 776
#define STRUCT_UNION_ADD_MEMBER_SIG 777
#define STRUCT_UNION_ADD_MEMBER_TYPEDEF 778
#define STRUCT_UNION_ADD_MEMBER_ENUM 779
#define STRUCT_UNION_ADD_MEMBER_STRUCT_UNION 780
#define STRUCT_UNION_CREATE 781
#define STRUCT_UNION_MEMBER_DEALLOC 782
#define STRUCT_UNION_DEALLOC 783
#define STRUCT_UNION_DEALLOC_LIST 784
#define LEXER_KEYWORD_1995_CODE 785
#define LEXER_CSTRING_A 786
#define LEXER_KEYWORD_A 787
#define LEXER_ESCAPED_NAME 788
#define LEXER_SYSTEM_CALL 789
#define LINE_DIRECTIVE 790
#define LINE_DIRECTIVE2 791
#define PROCESS_TIMESCALE_TOKEN 792
#define PROCESS_TIMESCALE 793
#define LEXER_YYWRAP 794
#define RESET_LEXER 795
#define CHECK_FOR_PRAGMA 796
#define BIND_ADD 797
#define BIND_APPEND_FSM_EXPR 798
#define BIND_REMOVE 799
#define BIND_FIND_SIG_NAME 800
#define BIND_PARAM 801
#define BIND_SIGNAL 802
#define BIND_TASK_FUNCTION_PORTS 803
#define BIND_TASK_FUNCTION_NAMEDBLOCK 804
#define BIND_PERFORM 805
#define BIND_DEALLOC 806
#define LEXER_KEYWORD_SV_CODE 807
#define LEXER_KEYWORD_2001_CODE 808
#define DEF_LOOKUP 809
#define IS_DEFINED 810
#define DEF_MATCH 811
#define DEF_START 812
#define DEFINE_MACRO 813
#define DO_DEFINE 814
#define DEF_IS_DONE 815
#define DEF_FINISH 816
#define DEF_UNDEFINE 817
#define INCLUDE_FILENAME 818
#define DO_INCLUDE 819
#define YYWRAP 820
#define RESET_PPLEXER 821
#define VECTOR_INIT 822
#define VECTOR_CREATE 823
#define VECTOR_COPY 824
#define VECTOR_NIBBLES_TO_UINT 825
#define VECTOR_UINT_TO_NIBBLES 826
#define VECTOR_DB_WRITE 827
#define VECTOR_DB_READ 828
#define VECTOR_DB_MERGE 829
#define VECTOR_GET_TOGGLE01 830
#define VECTOR_GET_TOGGLE10 831
#define VECTOR_DISPLAY_TOGGLE01 832
#define VECTOR_DISPLAY_TOGGLE10 833
#define VECTOR_TOGGLE_COUNT 834
#define VECTOR_MEM_RW_COUNT 835
#define VECTOR_SET_ASSIGNED 836
#define VECTOR_SET_VALUE 837
#define VECTOR_BIT_FILL 838
#define VECTOR_IS_SET 839
#define VECTOR_TO_INT 840
#define VECTOR_TO_UINT64 841
#define VECTOR_TO_SIM_TIME 842
#define VECTOR_FROM_INT 843
#define VECTOR_FROM_UINT64 844
#define VECTOR_SET_STATIC 845
#define VECTOR_TO_STRING 846
#define VECTOR_FROM_STRING 847
#define VECTOR_VCD_ASSIGN 848
#define VECTOR_BITWISE_OP 849
#define VECTOR_OP_COMPARE 850
#define VECTOR_OP_LSHIFT 851
#define VECTOR_OP_RSHIFT 852
#define VECTOR_OP_ARSHIFT 853
#define VECTOR_OP_ADD 854
#define VECTOR_OP_NEGATE 855
#define VECTOR_OP_SUBTRACT 856
#define VECTOR_OP_MULTIPLY 857
#define VECTOR_OP_INC 858
#define VECTOR_OP_DEC 859
#define VECTOR_UNARY_INV 860
#define VECTOR_UNARY_OP 861
#define VECTOR_UNARY_NOT 862
#define VECTOR_DEALLOC 863

extern profiler profiles[NUM_PROFILES];
#endif

extern unsigned int profile_index;

#endif

