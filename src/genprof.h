#ifndef __GENPROF_H__
#define __GENPROF_H__

/*
 Copyright (c) 2006-2009 Trevor Williams

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

#define NUM_PROFILES 1057

#ifdef DEBUG
#define UNREGISTERED 0
#define TCL_FUNC_GET_RACE_REASON_MSGS 1
#define TCL_FUNC_GET_FUNIT_LIST 2
#define TCL_FUNC_GET_INSTANCES 3
#define TCL_FUNC_GET_INSTANCE_LIST 4
#define TCL_FUNC_IS_FUNIT 5
#define TCL_FUNC_GET_FUNIT 6
#define TCL_FUNC_GET_INST 7
#define TCL_FUNC_GET_FUNIT_NAME 8
#define TCL_FUNC_GET_FILENAME 9
#define TCL_FUNC_INST_SCOPE 10
#define TCL_FUNC_GET_FUNIT_START_AND_END 11
#define TCL_FUNC_COLLECT_UNCOVERED_LINES 12
#define TCL_FUNC_COLLECT_COVERED_LINES 13
#define TCL_FUNC_COLLECT_RACE_LINES 14
#define TCL_FUNC_COLLECT_UNCOVERED_TOGGLES 15
#define TCL_FUNC_COLLECT_COVERED_TOGGLES 16
#define TCL_FUNC_COLLECT_UNCOVERED_MEMORIES 17
#define TCL_FUNC_COLLECT_COVERED_MEMORIES 18
#define TCL_FUNC_GET_TOGGLE_COVERAGE 19
#define TCL_FUNC_GET_MEMORY_COVERAGE 20
#define TCL_FUNC_COLLECT_UNCOVERED_COMBS 21
#define TCL_FUNC_COLLECT_COVERED_COMBS 22
#define TCL_FUNC_GET_COMB_EXPRESSION 23
#define TCL_FUNC_GET_COMB_COVERAGE 24
#define TCL_FUNC_COLLECT_UNCOVERED_FSMS 25
#define TCL_FUNC_COLLECT_COVERED_FSMS 26
#define TCL_FUNC_GET_FSM_COVERAGE 27
#define TCL_FUNC_COLLECT_UNCOVERED_ASSERTIONS 28
#define TCL_FUNC_COLLECT_COVERED_ASSERTIONS 29
#define TCL_FUNC_GET_ASSERT_COVERAGE 30
#define TCL_FUNC_OPEN_CDD 31
#define TCL_FUNC_CLOSE_CDD 32
#define TCL_FUNC_SAVE_CDD 33
#define TCL_FUNC_MERGE_CDD 34
#define TCL_FUNC_GET_LINE_SUMMARY 35
#define TCL_FUNC_GET_TOGGLE_SUMMARY 36
#define TCL_FUNC_GET_MEMORY_SUMMARY 37
#define TCL_FUNC_GET_COMB_SUMMARY 38
#define TCL_FUNC_GET_FSM_SUMMARY 39
#define TCL_FUNC_GET_ASSERT_SUMMARY 40
#define TCL_FUNC_PREPROCESS_VERILOG 41
#define TCL_FUNC_GET_SCORE_PATH 42
#define TCL_FUNC_GET_INCLUDE_PATHNAME 43
#define TCL_FUNC_GET_GENERATION 44
#define TCL_FUNC_SET_LINE_EXCLUDE 45
#define TCL_FUNC_SET_TOGGLE_EXCLUDE 46
#define TCL_FUNC_SET_MEMORY_EXCLUDE 47
#define TCL_FUNC_SET_COMB_EXCLUDE 48
#define TCL_FUNC_FSM_EXCLUDE 49
#define TCL_FUNC_SET_ASSERT_EXCLUDE 50
#define TCL_FUNC_GENERATE_REPORT 51
#define TCL_FUNC_INITIALIZE 52
#define ARC_FIND_FROM_STATE 53
#define ARC_FIND_TO_STATE 54
#define ARC_FIND_ARC 55
#define ARC_FIND_ARC_BY_EXCLUSION_ID 56
#define ARC_CREATE 57
#define ARC_ADD 58
#define ARC_STATE_HITS 59
#define ARC_TRANSITION_HITS 60
#define ARC_TRANSITION_EXCLUDED 61
#define ARC_GET_STATS 62
#define ARC_DB_WRITE 63
#define ARC_DB_READ 64
#define ARC_DB_MERGE 65
#define ARC_MERGE 66
#define ARC_GET_STATES 67
#define ARC_GET_TRANSITIONS 68
#define ARC_ARE_ANY_EXCLUDED 69
#define ARC_DEALLOC 70
#define MEMORY_GET_STAT 71
#define MEMORY_GET_STATS 72
#define MEMORY_GET_FUNIT_SUMMARY 73
#define MEMORY_GET_INST_SUMMARY 74
#define MEMORY_CREATE_PDIM_BIT_ARRAY 75
#define MEMORY_GET_MEM_COVERAGE 76
#define MEMORY_GET_COVERAGE 77
#define MEMORY_COLLECT 78
#define MEMORY_DISPLAY_TOGGLE_INSTANCE_SUMMARY 79
#define MEMORY_TOGGLE_INSTANCE_SUMMARY 80
#define MEMORY_DISPLAY_AE_INSTANCE_SUMMARY 81
#define MEMORY_AE_INSTANCE_SUMMARY 82
#define MEMORY_DISPLAY_TOGGLE_FUNIT_SUMMARY 83
#define MEMORY_TOGGLE_FUNIT_SUMMARY 84
#define MEMORY_DISPLAY_AE_FUNIT_SUMMARY 85
#define MEMORY_AE_FUNIT_SUMMARY 86
#define MEMORY_DISPLAY_MEMORY 87
#define MEMORY_DISPLAY_VERBOSE 88
#define MEMORY_INSTANCE_VERBOSE 89
#define MEMORY_FUNIT_VERBOSE 90
#define MEMORY_REPORT 91
#define ASSERTION_PARSE 92
#define ASSERTION_PARSE_ATTR 93
#define ASSERTION_GET_STATS 94
#define ASSERTION_DISPLAY_INSTANCE_SUMMARY 95
#define ASSERTION_INSTANCE_SUMMARY 96
#define ASSERTION_DISPLAY_FUNIT_SUMMARY 97
#define ASSERTION_FUNIT_SUMMARY 98
#define ASSERTION_DISPLAY_VERBOSE 99
#define ASSERTION_INSTANCE_VERBOSE 100
#define ASSERTION_FUNIT_VERBOSE 101
#define ASSERTION_REPORT 102
#define ASSERTION_GET_FUNIT_SUMMARY 103
#define ASSERTION_COLLECT 104
#define ASSERTION_GET_COVERAGE 105
#define TOGGLE_GET_STATS 106
#define TOGGLE_COLLECT 107
#define TOGGLE_GET_COVERAGE 108
#define TOGGLE_GET_FUNIT_SUMMARY 109
#define TOGGLE_GET_INST_SUMMARY 110
#define TOGGLE_DISPLAY_INSTANCE_SUMMARY 111
#define TOGGLE_INSTANCE_SUMMARY 112
#define TOGGLE_DISPLAY_FUNIT_SUMMARY 113
#define TOGGLE_FUNIT_SUMMARY 114
#define TOGGLE_DISPLAY_VERBOSE 115
#define TOGGLE_INSTANCE_VERBOSE 116
#define TOGGLE_FUNIT_VERBOSE 117
#define TOGGLE_REPORT 118
#define ATTRIBUTE_CREATE 119
#define ATTRIBUTE_PARSE 120
#define ATTRIBUTE_DEALLOC 121
#define PERF_GEN_STATS 122
#define PERF_OUTPUT_MOD_STATS 123
#define PERF_OUTPUT_INST_REPORT_HELPER 124
#define PERF_OUTPUT_INST_REPORT 125
#define TREE_ADD 126
#define TREE_FIND 127
#define TREE_REMOVE 128
#define TREE_DEALLOC 129
#define CODEGEN_CREATE_EXPR_HELPER 130
#define CODEGEN_CREATE_EXPR 131
#define CODEGEN_GEN_EXPR 132
#define SEARCH_INIT 133
#define SEARCH_ADD_INCLUDE_PATH 134
#define SEARCH_ADD_DIRECTORY_PATH 135
#define SEARCH_ADD_FILE 136
#define SEARCH_ADD_NO_SCORE_FUNIT 137
#define SEARCH_ADD_EXTENSIONS 138
#define SEARCH_FREE_LISTS 139
#define COMBINATION_CALC_DEPTH 140
#define COMBINATION_DOES_MULTI_EXP_NEED_UL 141
#define COMBINATION_MULTI_EXPR_CALC 142
#define COMBINATION_IS_EXPR_MULTI_NODE 143
#define COMBINATION_GET_TREE_STATS 144
#define COMBINATION_RESET_COUNTED_EXPRS 145
#define COMBINATION_RESET_COUNTED_EXPR_TREE 146
#define COMBINATION_GET_STATS 147
#define COMBINATION_GET_FUNIT_SUMMARY 148
#define COMBINATION_GET_INST_SUMMARY 149
#define COMBINATION_DISPLAY_INSTANCE_SUMMARY 150
#define COMBINATION_INSTANCE_SUMMARY 151
#define COMBINATION_DISPLAY_FUNIT_SUMMARY 152
#define COMBINATION_FUNIT_SUMMARY 153
#define COMBINATION_DRAW_LINE 154
#define COMBINATION_DRAW_CENTERED_LINE 155
#define COMBINATION_PARENTHESIZE 156
#define COMBINATION_UNDERLINE_TREE 157
#define COMBINATION_PREP_LINE 158
#define COMBINATION_UNDERLINE 159
#define COMBINATION_UNARY 160
#define COMBINATION_EVENT 161
#define COMBINATION_TWO_VARS 162
#define COMBINATION_MULTI_VAR_EXPRS 163
#define COMBINATION_MULTI_EXPR_OUTPUT_LENGTH 164
#define COMBINATION_MULTI_EXPR_OUTPUT 165
#define COMBINATION_MULTI_VARS 166
#define COMBINATION_GET_MISSED_EXPR 167
#define COMBINATION_LIST_MISSED 168
#define COMBINATION_OUTPUT_EXPR 169
#define COMBINATION_DISPLAY_VERBOSE 170
#define COMBINATION_INSTANCE_VERBOSE 171
#define COMBINATION_FUNIT_VERBOSE 172
#define COMBINATION_COLLECT 173
#define COMBINATION_GET_EXCLUDE_LIST 174
#define COMBINATION_GET_EXPRESSION 175
#define COMBINATION_GET_COVERAGE 176
#define COMBINATION_REPORT 177
#define VCD_PARSE_DEF_IGNORE 178
#define VCD_PARSE_DEF_VAR 179
#define VCD_PARSE_DEF_SCOPE 180
#define VCD_PARSE_DEF 181
#define VCD_PARSE_SIM_VECTOR 182
#define VCD_PARSE_SIM_REAL 183
#define VCD_PARSE_SIM_IGNORE 184
#define VCD_PARSE_SIM 185
#define VCD_PARSE 186
#define COMMAND_MERGE 187
#define RACE_BLK_CREATE 188
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT_HELPER 189
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT 190
#define RACE_GET_HEAD_STATEMENT 191
#define RACE_FIND_HEAD_STATEMENT 192
#define RACE_CALC_STMT_BLK_TYPE 193
#define RACE_CALC_EXPR_ASSIGNMENT 194
#define RACE_CALC_ASSIGNMENTS 195
#define RACE_HANDLE_RACE_CONDITION 196
#define RACE_CHECK_ASSIGNMENT_TYPES 197
#define RACE_CHECK_ONE_BLOCK_ASSIGNMENT 198
#define RACE_CHECK_RACE_COUNT 199
#define RACE_CHECK_MODULES 200
#define RACE_DB_WRITE 201
#define RACE_DB_READ 202
#define RACE_GET_STATS 203
#define RACE_REPORT_SUMMARY 204
#define RACE_REPORT_VERBOSE 205
#define RACE_REPORT 206
#define RACE_COLLECT_LINES 207
#define RACE_BLK_DELETE_LIST 208
#define RANK_CREATE_COMP_CDD_COV 209
#define RANK_DEALLOC_COMP_CDD_COV 210
#define RANK_CHECK_INDEX 211
#define RANK_GATHER_SIGNAL_COV 212
#define RANK_GATHER_COMB_COV 213
#define RANK_GATHER_EXPRESSION_COV 214
#define RANK_GATHER_FSM_COV 215
#define RANK_CALC_NUM_CPS 216
#define RANK_GATHER_COMP_CDD_COV 217
#define RANK_READ_CDD 218
#define RANK_SELECTED_CDD_COV 219
#define RANK_PERFORM_WEIGHTED_SELECTION 220
#define RANK_PERFORM_GREEDY_SORT 221
#define RANK_COUNT_CPS 222
#define RANK_PERFORM 223
#define RANK_OUTPUT 224
#define COMMAND_RANK 225
#define ENUMERATE_ADD_ITEM 226
#define ENUMERATE_END_LIST 227
#define ENUMERATE_RESOLVE 228
#define ENUMERATE_DEALLOC 229
#define ENUMERATE_DEALLOC_LIST 230
#define REENTRANT_COUNT_AFU_BITS 231
#define REENTRANT_STORE_DATA_BITS 232
#define REENTRANT_RESTORE_DATA_BITS 233
#define REENTRANT_CREATE 234
#define REENTRANT_DEALLOC 235
#define EXCLUDE_EXPR_ASSIGN_AND_RECALC 236
#define EXCLUDE_SIG_ASSIGN_AND_RECALC 237
#define EXCLUDE_ARC_ASSIGN_AND_RECALC 238
#define EXCLUDE_ADD_EXCLUDE_REASON 239
#define EXCLUDE_REMOVE_EXCLUDE_REASON 240
#define EXCLUDE_IS_LINE_EXCLUDED 241
#define EXCLUDE_SET_LINE_EXCLUDE 242
#define EXCLUDE_IS_TOGGLE_EXCLUDED 243
#define EXCLUDE_SET_TOGGLE_EXCLUDE 244
#define EXCLUDE_IS_COMB_EXCLUDED 245
#define EXCLUDE_SET_COMB_EXCLUDE 246
#define EXCLUDE_IS_FSM_EXCLUDED 247
#define EXCLUDE_SET_FSM_EXCLUDE 248
#define EXCLUDE_IS_ASSERT_EXCLUDED 249
#define EXCLUDE_SET_ASSERT_EXCLUDE 250
#define EXCLUDE_FIND_EXCLUDE_REASON 251
#define EXCLUDE_DB_WRITE 252
#define EXCLUDE_DB_READ 253
#define EXCLUDE_RESOLVE_REASON 254
#define EXCLUDE_DB_MERGE 255
#define EXCLUDE_MERGE 256
#define EXCLUDE_FIND_SIGNAL 257
#define EXCLUDE_FIND_EXPRESSION 258
#define EXCLUDE_FIND_FSM_ARC 259
#define EXCLUDE_FORMAT_REASON 260
#define EXCLUDED_GET_MESSAGE 261
#define EXCLUDE_HANDLE_EXCLUDE_REASON 262
#define EXCLUDE_PRINT_EXCLUSION 263
#define EXCLUDE_LINE_FROM_ID 264
#define EXCLUDE_TOGGLE_FROM_ID 265
#define EXCLUDE_MEMORY_FROM_ID 266
#define EXCLUDE_EXPR_FROM_ID 267
#define EXCLUDE_FSM_FROM_ID 268
#define EXCLUDE_ASSERT_FROM_ID 269
#define EXCLUDE_APPLY_EXCLUSIONS 270
#define COMMAND_EXCLUDE 271
#define VECTOR_INIT 272
#define VECTOR_INT_R64 273
#define VECTOR_INT_R32 274
#define VECTOR_CREATE 275
#define VECTOR_COPY 276
#define VECTOR_COPY_RANGE 277
#define VECTOR_CLONE 278
#define VECTOR_DB_WRITE 279
#define VECTOR_DB_READ 280
#define VECTOR_DB_MERGE 281
#define VECTOR_MERGE 282
#define VECTOR_GET_EVAL_A 283
#define VECTOR_GET_EVAL_B 284
#define VECTOR_GET_EVAL_C 285
#define VECTOR_GET_EVAL_D 286
#define VECTOR_GET_EVAL_AB_COUNT 287
#define VECTOR_GET_EVAL_ABC_COUNT 288
#define VECTOR_GET_EVAL_ABCD_COUNT 289
#define VECTOR_GET_TOGGLE01_ULONG 290
#define VECTOR_GET_TOGGLE10_ULONG 291
#define VECTOR_DISPLAY_TOGGLE01_ULONG 292
#define VECTOR_DISPLAY_TOGGLE10_ULONG 293
#define VECTOR_TOGGLE_COUNT 294
#define VECTOR_MEM_RW_COUNT 295
#define VECTOR_SET_ASSIGNED 296
#define VECTOR_SET_COVERAGE_AND_ASSIGN 297
#define VECTOR_GET_SIGN_EXTEND_VECTOR_ULONG 298
#define VECTOR_SIGN_EXTEND_ULONG 299
#define VECTOR_LSHIFT_ULONG 300
#define VECTOR_RSHIFT_ULONG 301
#define VECTOR_SET_VALUE 302
#define VECTOR_PART_SELECT_PULL 303
#define VECTOR_PART_SELECT_PUSH 304
#define VECTOR_SET_UNARY_EVALS 305
#define VECTOR_SET_AND_COMB_EVALS 306
#define VECTOR_SET_OR_COMB_EVALS 307
#define VECTOR_SET_OTHER_COMB_EVALS 308
#define VECTOR_IS_UKNOWN 309
#define VECTOR_IS_NOT_ZERO 310
#define VECTOR_SET_TO_X 311
#define VECTOR_TO_INT 312
#define VECTOR_TO_UINT64 313
#define VECTOR_TO_REAL64 314
#define VECTOR_TO_SIM_TIME 315
#define VECTOR_FROM_INT 316
#define VECTOR_FROM_UINT64 317
#define VECTOR_FROM_REAL64 318
#define VECTOR_SET_STATIC 319
#define VECTOR_TO_STRING 320
#define VECTOR_FROM_STRING_FIXED 321
#define VECTOR_FROM_STRING 322
#define VECTOR_VCD_ASSIGN 323
#define VECTOR_BITWISE_AND_OP 324
#define VECTOR_BITWISE_NAND_OP 325
#define VECTOR_BITWISE_OR_OP 326
#define VECTOR_BITWISE_NOR_OP 327
#define VECTOR_BITWISE_XOR_OP 328
#define VECTOR_BITWISE_NXOR_OP 329
#define VECTOR_OP_LT 330
#define VECTOR_OP_LE 331
#define VECTOR_OP_GT 332
#define VECTOR_OP_GE 333
#define VECTOR_OP_EQ 334
#define VECTOR_CEQ_ULONG 335
#define VECTOR_OP_CEQ 336
#define VECTOR_OP_CXEQ 337
#define VECTOR_OP_CZEQ 338
#define VECTOR_OP_NE 339
#define VECTOR_OP_CNE 340
#define VECTOR_OP_LOR 341
#define VECTOR_OP_LAND 342
#define VECTOR_OP_LSHIFT 343
#define VECTOR_OP_RSHIFT 344
#define VECTOR_OP_ARSHIFT 345
#define VECTOR_OP_ADD 346
#define VECTOR_OP_NEGATE 347
#define VECTOR_OP_SUBTRACT 348
#define VECTOR_OP_MULTIPLY 349
#define VECTOR_OP_DIVIDE 350
#define VECTOR_OP_MODULUS 351
#define VECTOR_OP_INC 352
#define VECTOR_OP_DEC 353
#define VECTOR_UNARY_INV 354
#define VECTOR_UNARY_AND 355
#define VECTOR_UNARY_NAND 356
#define VECTOR_UNARY_OR 357
#define VECTOR_UNARY_NOR 358
#define VECTOR_UNARY_XOR 359
#define VECTOR_UNARY_NXOR 360
#define VECTOR_UNARY_NOT 361
#define VECTOR_OP_EXPAND 362
#define VECTOR_OP_LIST 363
#define VECTOR_DEALLOC_VALUE 364
#define VECTOR_DEALLOC 365
#define SYM_VALUE_STORE 366
#define ADD_SYM_VALUES_TO_SIM 367
#define COVERED_VALUE_CHANGE_BIN 368
#define COVERED_VALUE_CHANGE_REAL 369
#define COVERED_END_OF_SIM 370
#define COVERED_CB_ERROR_HANDLER 371
#define GEN_NEXT_SYMBOL 372
#define COVERED_CREATE_VALUE_CHANGE_CB 373
#define COVERED_PARSE_TASK_FUNC 374
#define COVERED_PARSE_SIGNALS 375
#define COVERED_PARSE_INSTANCE 376
#define COVERED_SIM_CALLTF 377
#define FSM_CREATE 378
#define FSM_ADD_ARC 379
#define FSM_CREATE_TABLES 380
#define FSM_DB_WRITE 381
#define FSM_DB_READ 382
#define FSM_DB_MERGE 383
#define FSM_MERGE 384
#define FSM_TABLE_SET 385
#define FSM_GET_STATS 386
#define FSM_GET_FUNIT_SUMMARY 387
#define FSM_GET_INST_SUMMARY 388
#define FSM_GATHER_SIGNALS 389
#define FSM_COLLECT 390
#define FSM_GET_COVERAGE 391
#define FSM_DISPLAY_INSTANCE_SUMMARY 392
#define FSM_INSTANCE_SUMMARY 393
#define FSM_DISPLAY_FUNIT_SUMMARY 394
#define FSM_FUNIT_SUMMARY 395
#define FSM_DISPLAY_STATE_VERBOSE 396
#define FSM_DISPLAY_ARC_VERBOSE 397
#define FSM_DISPLAY_VERBOSE 398
#define FSM_INSTANCE_VERBOSE 399
#define FSM_FUNIT_VERBOSE 400
#define FSM_REPORT 401
#define FSM_DEALLOC 402
#define REPORT_PARSE_METRICS 403
#define REPORT_PARSE_ARGS 404
#define REPORT_GATHER_INSTANCE_STATS 405
#define REPORT_GATHER_FUNIT_STATS 406
#define REPORT_PRINT_HEADER 407
#define REPORT_GENERATE 408
#define REPORT_READ_CDD_AND_READY 409
#define REPORT_CLOSE_CDD 410
#define REPORT_SAVE_CDD 411
#define REPORT_FORMAT_EXCLUSION_REASON 412
#define REPORT_OUTPUT_EXCLUSION_REASON 413
#define COMMAND_REPORT 414
#define FSM_ARG_PARSE_STATE 415
#define FSM_ARG_PARSE 416
#define FSM_ARG_PARSE_VALUE 417
#define FSM_ARG_PARSE_TRANS 418
#define FSM_ARG_PARSE_ATTR 419
#define FSM_VAR_ADD 420
#define FSM_VAR_IS_OUTPUT_STATE 421
#define FSM_VAR_BIND_EXPR 422
#define FSM_VAR_ADD_EXPR 423
#define FSM_VAR_BIND_STMT 424
#define FSM_VAR_BIND_ADD 425
#define FSM_VAR_STMT_ADD 426
#define FSM_VAR_BIND 427
#define FSM_VAR_DEALLOC 428
#define FSM_VAR_REMOVE 429
#define FSM_VAR_CLEANUP 430
#define SCOPE_FIND_FUNIT_FROM_SCOPE 431
#define SCOPE_FIND_PARAM 432
#define SCOPE_FIND_SIGNAL 433
#define SCOPE_FIND_TASK_FUNCTION_NAMEDBLOCK 434
#define SCOPE_GET_PARENT_FUNIT 435
#define SCOPE_GET_PARENT_MODULE 436
#define FUNC_ITER_DISPLAY 437
#define FUNC_ITER_SORT 438
#define FUNC_ITER_COUNT_STMT_ITERS 439
#define FUNC_ITER_ADD_STMT_LINKS 440
#define FUNC_ITER_ADD_SIG_LINKS 441
#define FUNC_ITER_INIT 442
#define FUNC_ITER_GET_NEXT_STATEMENT 443
#define FUNC_ITER_GET_NEXT_SIGNAL 444
#define FUNC_ITER_DEALLOC 445
#define SCORE_GENERATE_TOP_VPI_MODULE 446
#define SCORE_GENERATE_TOP_DUMPVARS_MODULE 447
#define SCORE_GENERATE_PLI_TAB_FILE 448
#define SCORE_PARSE_DEFINE 449
#define SCORE_PARSE_ARGS 450
#define COMMAND_SCORE 451
#define FUNIT_INIT 452
#define FUNIT_CREATE 453
#define FUNIT_GET_CURR_MODULE 454
#define FUNIT_GET_CURR_MODULE_SAFE 455
#define FUNIT_GET_CURR_FUNCTION 456
#define FUNIT_GET_CURR_TASK 457
#define FUNIT_GET_PORT_COUNT 458
#define FUNIT_FIND_PARAM 459
#define FUNIT_FIND_SIGNAL 460
#define FUNIT_REMOVE_STMT_BLKS_CALLING_STMT 461
#define FUNIT_GEN_TASK_FUNCTION_NAMEDBLOCK_NAME 462
#define FUNIT_SIZE_ELEMENTS 463
#define FUNIT_DB_WRITE 464
#define FUNIT_DB_READ 465
#define FUNIT_VERSION_DB_READ 466
#define FUNIT_DB_INST_MERGE 467
#define FUNIT_DB_MOD_MERGE 468
#define FUNIT_MERGE 469
#define FUNIT_FLATTEN_NAME 470
#define FUNIT_FIND_BY_ID 471
#define FUNIT_IS_TOP_MODULE 472
#define FUNIT_IS_UNNAMED 473
#define FUNIT_IS_UNNAMED_CHILD_OF 474
#define FUNIT_IS_CHILD_OF 475
#define FUNIT_DISPLAY_SIGNALS 476
#define FUNIT_DISPLAY_EXPRESSIONS 477
#define STATEMENT_ADD_THREAD 478
#define FUNIT_PUSH_THREADS 479
#define STATEMENT_DELETE_THREAD 480
#define FUNIT_OUTPUT_DUMPVARS 481
#define FUNIT_IS_ONE_SIGNAL_ASSIGNED 482
#define FUNIT_CLEAN 483
#define FUNIT_DEALLOC 484
#define GEN_ITEM_STRINGIFY 485
#define GEN_ITEM_DISPLAY 486
#define GEN_ITEM_DISPLAY_BLOCK_HELPER 487
#define GEN_ITEM_DISPLAY_BLOCK 488
#define GEN_ITEM_COMPARE 489
#define GEN_ITEM_FIND 490
#define GEN_ITEM_FIND_INST 491
#define GEN_ITEM_REMOVE_IF_CONTAINS_EXPR_CALLING_STMT 492
#define GEN_ITEM_GET_GENVAR 493
#define GEN_ITEM_VARNAME_CONTAINS_GENVAR 494
#define GEN_ITEM_CALC_SIGNAL_NAME 495
#define GEN_ITEM_CREATE_EXPR 496
#define GEN_ITEM_CREATE_SIG 497
#define GEN_ITEM_CREATE_STMT 498
#define GEN_ITEM_CREATE_INST 499
#define GEN_ITEM_CREATE_TFN 500
#define GEN_ITEM_CREATE_BIND 501
#define GEN_ITEM_RESIZE_STMTS_AND_SIGS 502
#define GEN_ITEM_ASSIGN_IDS 503
#define GEN_ITEM_DB_WRITE 504
#define GEN_ITEM_DB_WRITE_EXPR_TREE 505
#define GEN_ITEM_CONNECT 506
#define GEN_ITEM_RESOLVE 507
#define GEN_ITEM_BIND 508
#define GENERATE_RESOLVE_INST 509
#define GENERATE_REMOVE_STMT_HELPER 510
#define GENERATE_REMOVE_STMT 511
#define GEN_ITEM_DEALLOC 512
#define SIM_CURRENT_THREAD 513
#define SIM_THREAD_POP_HEAD 514
#define SIM_THREAD_INSERT_INTO_DELAY_QUEUE 515
#define SIM_THREAD_PUSH 516
#define SIM_EXPR_CHANGED 517
#define SIM_CREATE_THREAD 518
#define SIM_ADD_THREAD 519
#define SIM_KILL_THREAD 520
#define SIM_KILL_THREAD_WITH_FUNIT 521
#define SIM_ADD_STATICS 522
#define SIM_EXPRESSION 523
#define SIM_THREAD 524
#define SIM_SIMULATE 525
#define SIM_INITIALIZE 526
#define SIM_STOP 527
#define SIM_FINISH 528
#define SIM_ADD_NONBLOCK_ASSIGN 529
#define SIM_PERFORM_NBA 530
#define SIM_DEALLOC 531
#define STATISTIC_CREATE 532
#define STATISTIC_IS_EMPTY 533
#define STATISTIC_DEALLOC 534
#define VSIGNAL_INIT 535
#define VSIGNAL_CREATE 536
#define VSIGNAL_CREATE_VEC 537
#define VSIGNAL_DUPLICATE 538
#define VSIGNAL_DB_WRITE 539
#define VSIGNAL_DB_READ 540
#define VSIGNAL_DB_MERGE 541
#define VSIGNAL_MERGE 542
#define VSIGNAL_PROPAGATE 543
#define VSIGNAL_VCD_ASSIGN 544
#define VSIGNAL_ADD_EXPRESSION 545
#define VSIGNAL_FROM_STRING 546
#define VSIGNAL_CALC_WIDTH_FOR_EXPR 547
#define VSIGNAL_CALC_LSB_FOR_EXPR 548
#define VSIGNAL_DEALLOC 549
#define SCORE_ADD_ARGS 550
#define INFO_SET_VECTOR_ELEM_SIZE 551
#define INFO_DB_WRITE 552
#define INFO_DB_READ 553
#define ARGS_DB_READ 554
#define MESSAGE_DB_READ 555
#define MERGED_CDD_DB_READ 556
#define INFO_DEALLOC 557
#define STATEMENT_CREATE 558
#define STATEMENT_QUEUE_ADD 559
#define STATEMENT_QUEUE_COMPARE 560
#define STATEMENT_SIZE_ELEMENTS 561
#define STATEMENT_DB_WRITE 562
#define STATEMENT_DB_WRITE_TREE 563
#define STATEMENT_DB_WRITE_EXPR_TREE 564
#define STATEMENT_DB_READ 565
#define STATEMENT_ASSIGN_EXPR_IDS 566
#define STATEMENT_CONNECT 567
#define STATEMENT_GET_LAST_LINE_HELPER 568
#define STATEMENT_GET_LAST_LINE 569
#define STATEMENT_FIND_RHS_SIGS 570
#define STATEMENT_FIND_STATEMENT 571
#define STATEMENT_CONTAINS_EXPR_CALLING_STMT 572
#define STATEMENT_DEALLOC_RECURSIVE 573
#define STATEMENT_DEALLOC 574
#define STATIC_EXPR_GEN_UNARY 575
#define STATIC_EXPR_GEN 576
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_PRE 577
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_POST 578
#define STATIC_EXPR_DEALLOC 579
#define STMT_BLK_ADD_TO_REMOVE_LIST 580
#define STMT_BLK_REMOVE 581
#define STMT_BLK_SPECIFY_REMOVAL_REASON 582
#define LINE_GET_STATS 583
#define LINE_COLLECT 584
#define LINE_GET_FUNIT_SUMMARY 585
#define LINE_GET_INST_SUMMARY 586
#define LINE_DISPLAY_INSTANCE_SUMMARY 587
#define LINE_INSTANCE_SUMMARY 588
#define LINE_DISPLAY_FUNIT_SUMMARY 589
#define LINE_FUNIT_SUMMARY 590
#define LINE_DISPLAY_VERBOSE 591
#define LINE_INSTANCE_VERBOSE 592
#define LINE_FUNIT_VERBOSE 593
#define LINE_REPORT 594
#define STR_LINK_ADD 595
#define STMT_LINK_ADD_HEAD 596
#define EXP_LINK_ADD 597
#define SIG_LINK_ADD 598
#define FSM_LINK_ADD 599
#define FUNIT_LINK_ADD 600
#define GITEM_LINK_ADD 601
#define INST_LINK_ADD 602
#define STR_LINK_FIND 603
#define STMT_LINK_FIND 604
#define STMT_LINK_FIND_BY_POS 605
#define EXP_LINK_FIND 606
#define EXP_LINK_FIND_BY_POS 607
#define SIG_LINK_FIND 608
#define FSM_LINK_FIND 609
#define FSM_LINK_FIND_BY_POS 610
#define FUNIT_LINK_FIND 611
#define GITEM_LINK_FIND 612
#define INST_LINK_FIND_BY_SCOPE 613
#define INST_LINK_FIND_BY_FUNIT 614
#define STR_LINK_REMOVE 615
#define EXP_LINK_REMOVE 616
#define GITEM_LINK_REMOVE 617
#define FUNIT_LINK_REMOVE 618
#define STR_LINK_DELETE_LIST 619
#define STMT_LINK_UNLINK 620
#define STMT_LINK_DELETE_LIST 621
#define EXP_LINK_DELETE_LIST 622
#define SIG_LINK_DELETE_LIST 623
#define FSM_LINK_DELETE_LIST 624
#define FUNIT_LINK_DELETE_LIST 625
#define GITEM_LINK_DELETE_LIST 626
#define INST_LINK_DELETE_LIST 627
#define VCDID 628
#define VCD_CALLBACK 629
#define LXT_PARSE 630
#define STRUCT_UNION_LENGTH 631
#define STRUCT_UNION_ADD_MEMBER 632
#define STRUCT_UNION_ADD_MEMBER_VOID 633
#define STRUCT_UNION_ADD_MEMBER_SIG 634
#define STRUCT_UNION_ADD_MEMBER_TYPEDEF 635
#define STRUCT_UNION_ADD_MEMBER_ENUM 636
#define STRUCT_UNION_ADD_MEMBER_STRUCT_UNION 637
#define STRUCT_UNION_CREATE 638
#define STRUCT_UNION_MEMBER_DEALLOC 639
#define STRUCT_UNION_DEALLOC 640
#define STRUCT_UNION_DEALLOC_LIST 641
#define LXT2_RD_EXPAND_INTEGER_TO_BITS 642
#define LXT2_RD_EXPAND_BITS_TO_INTEGER 643
#define LXT2_RD_ITER_RADIX 644
#define LXT2_RD_ITER_RADIX0 645
#define LXT2_RD_BUILD_RADIX 646
#define LXT2_RD_REGENERATE_PROCESS_MASK 647
#define LXT2_RD_PROCESS_BLOCK 648
#define LXT2_RD_INIT 649
#define LXT2_RD_CLOSE 650
#define LXT2_RD_GET_FACNAME 651
#define LXT2_RD_ITER_BLOCKS 652
#define LXT2_RD_LIMIT_TIME_RANGE 653
#define LXT2_RD_UNLIMIT_TIME_RANGE 654
#define OBFUSCATE_SET_MODE 655
#define OBFUSCATE_NAME 656
#define OBFUSCATE_DEALLOC 657
#define SYMTABLE_ADD_SYM_SIG 658
#define SYMTABLE_INIT 659
#define SYMTABLE_CREATE 660
#define SYMTABLE_ADD 661
#define SYMTABLE_SET_VALUE 662
#define SYMTABLE_ASSIGN 663
#define SYMTABLE_DEALLOC 664
#define OVL_IS_ASSERTION_NAME 665
#define OVL_IS_ASSERTION_MODULE 666
#define OVL_IS_COVERAGE_POINT 667
#define OVL_ADD_ASSERTIONS_TO_NO_SCORE_LIST 668
#define OVL_GET_FUNIT_STATS 669
#define OVL_GET_COVERAGE_POINT 670
#define OVL_DISPLAY_VERBOSE 671
#define OVL_COLLECT 672
#define OVL_GET_COVERAGE 673
#define PARSER_PORT_DECLARATION_A 674
#define PARSER_PORT_DECLARATION_B 675
#define PARSER_PORT_DECLARATION_C 676
#define PARSER_STATIC_EXPR_PRIMARY_A 677
#define PARSER_STATIC_EXPR_PRIMARY_B 678
#define PARSER_EXPRESSION_LIST_A 679
#define PARSER_EXPRESSION_LIST_B 680
#define PARSER_EXPRESSION_LIST_C 681
#define PARSER_EXPRESSION_LIST_D 682
#define PARSER_IDENTIFIER_A 683
#define PARSER_GENERATE_CASE_ITEM_A 684
#define PARSER_GENERATE_CASE_ITEM_B 685
#define PARSER_GENERATE_CASE_ITEM_C 686
#define PARSER_STATEMENT_BEGIN_A 687
#define PARSER_STATEMENT_FORK_A 688
#define PARSER_STATEMENT_FOR_A 689
#define PARSER_CASE_ITEM_A 690
#define PARSER_CASE_ITEM_B 691
#define PARSER_CASE_ITEM_C 692
#define PARSER_DELAY_VALUE_A 693
#define PARSER_DELAY_VALUE_B 694
#define PARSER_PARAMETER_VALUE_BYNAME_A 695
#define PARSER_GATE_INSTANCE_A 696
#define PARSER_GATE_INSTANCE_B 697
#define PARSER_GATE_INSTANCE_C 698
#define PARSER_GATE_INSTANCE_D 699
#define PARSER_LIST_OF_NAMES_A 700
#define PARSER_LIST_OF_NAMES_B 701
#define SYS_TASK_UNIFORM 702
#define SYS_TASK_RTL_DIST_UNIFORM 703
#define SYS_TASK_SRANDOM 704
#define SYS_TASK_RANDOM 705
#define SYS_TASK_URANDOM 706
#define SYS_TASK_URANDOM_RANGE 707
#define SYS_TASK_REALTOBITS 708
#define SYS_TASK_BITSTOREAL 709
#define SYS_TASK_SHORTREALTOBITS 710
#define SYS_TASK_BITSTOSHORTREAL 711
#define SYS_TASK_ITOR 712
#define SYS_TASK_RTOI 713
#define SYS_TASK_STORE_PLUSARGS 714
#define SYS_TASK_TEST_PLUSARG 715
#define SYS_TASK_VALUE_PLUSARGS 716
#define SYS_TASK_DEALLOC 717
#define VLERROR 718
#define VLWARN 719
#define PARSER_DEALLOC_SIG_RANGE 720
#define PARSER_COPY_CURR_RANGE 721
#define PARSER_COPY_RANGE_TO_CURR_RANGE 722
#define PARSER_EXPLICITLY_SET_CURR_RANGE 723
#define PARSER_IMPLICITLY_SET_CURR_RANGE 724
#define PARSER_CHECK_GENERATION 725
#define PARSER_HANDLE_CASE_STATEMENT 726
#define PARSER_HANDLE_CASE_STATEMENT_LIST 727
#define PARSER_HANDLE_GENERATE_CASE_STATEMENT 728
#define PARSER_HANDLE_GENERATE_CASE_STATEMENT_LIST 729
#define LEXER_KEYWORD_1995_CODE 730
#define LEXER_KEYWORD_2001_CODE 731
#define LEXER_KEYWORD_SV_CODE 732
#define LEXER_KEYWORD_SYS_1995_CODE 733
#define LEXER_KEYWORD_SYS_2001_CODE 734
#define LEXER_KEYWORD_SYS_SV_CODE 735
#define DEF_LOOKUP 736
#define IS_DEFINED 737
#define DEF_MATCH 738
#define DEF_START 739
#define DEFINE_MACRO 740
#define DO_DEFINE 741
#define DEF_IS_DONE 742
#define DEF_FINISH 743
#define DEF_UNDEFINE 744
#define INCLUDE_FILENAME 745
#define DO_INCLUDE 746
#define YYWRAP 747
#define RESET_PPLEXER 748
#define LEXER_CSTRING_A 749
#define LEXER_KEYWORD_A 750
#define LEXER_ESCAPED_NAME 751
#define LEXER_SYSTEM_CALL 752
#define LINE_DIRECTIVE 753
#define LINE_DIRECTIVE2 754
#define PROCESS_TIMESCALE_TOKEN 755
#define PROCESS_TIMESCALE 756
#define LEXER_YYWRAP 757
#define RESET_LEXER 758
#define CHECK_FOR_PRAGMA 759
#define BIND_ADD 760
#define BIND_APPEND_FSM_EXPR 761
#define BIND_REMOVE 762
#define BIND_FIND_SIG_NAME 763
#define BIND_PARAM 764
#define BIND_SIGNAL 765
#define BIND_TASK_FUNCTION_PORTS 766
#define BIND_TASK_FUNCTION_NAMEDBLOCK 767
#define BIND_PERFORM 768
#define BIND_DEALLOC 769
#define PARSE_READLINE 770
#define PARSE_DESIGN 771
#define PARSE_AND_SCORE_DUMPFILE 772
#define CHECK_OPTION_VALUE 773
#define IS_VARIABLE 774
#define IS_FUNC_UNIT 775
#define IS_LEGAL_FILENAME 776
#define GET_BASENAME 777
#define GET_DIRNAME 778
#define GET_ABSOLUTE_PATH 779
#define GET_RELATIVE_PATH 780
#define DIRECTORY_EXISTS 781
#define DIRECTORY_LOAD 782
#define FILE_EXISTS 783
#define UTIL_READLINE 784
#define GET_QUOTED_STRING 785
#define SUBSTITUTE_ENV_VARS 786
#define SCOPE_EXTRACT_FRONT 787
#define SCOPE_EXTRACT_BACK 788
#define SCOPE_EXTRACT_SCOPE 789
#define SCOPE_GEN_PRINTABLE 790
#define SCOPE_COMPARE 791
#define SCOPE_LOCAL 792
#define CONVERT_FILE_TO_MODULE 793
#define GET_NEXT_VFILE 794
#define GEN_SPACE 795
#define REMOVE_UNDERSCORES 796
#define GET_FUNIT_TYPE 797
#define CALC_MISS_PERCENT 798
#define READ_COMMAND_FILE 799
#define DB_CREATE 800
#define DB_CLOSE 801
#define DB_CHECK_FOR_TOP_MODULE 802
#define DB_WRITE 803
#define DB_READ 804
#define DB_MERGE_INSTANCE_TREES 805
#define DB_SCALE_TO_PRECISION 806
#define DB_CREATE_UNNAMED_SCOPE 807
#define DB_IS_UNNAMED_SCOPE 808
#define DB_SET_TIMESCALE 809
#define DB_GET_CURR_FUNIT 810
#define DB_GET_EXCLUSION_ID_SIZE 811
#define DB_GEN_EXCLUSION_ID 812
#define DB_ADD_FILE_VERSION 813
#define DB_OUTPUT_DUMPVARS 814
#define DB_ADD_INSTANCE 815
#define DB_ADD_MODULE 816
#define DB_END_MODULE 817
#define DB_ADD_FUNCTION_TASK_NAMEDBLOCK 818
#define DB_END_FUNCTION_TASK_NAMEDBLOCK 819
#define DB_ADD_DECLARED_PARAM 820
#define DB_ADD_OVERRIDE_PARAM 821
#define DB_ADD_VECTOR_PARAM 822
#define DB_ADD_DEFPARAM 823
#define DB_ADD_SIGNAL 824
#define DB_ADD_ENUM 825
#define DB_END_ENUM_LIST 826
#define DB_ADD_TYPEDEF 827
#define DB_FIND_SIGNAL 828
#define DB_ADD_GEN_ITEM_BLOCK 829
#define DB_FIND_GEN_ITEM 830
#define DB_FIND_TYPEDEF 831
#define DB_GET_CURR_GEN_BLOCK 832
#define DB_CURR_SIGNAL_COUNT 833
#define DB_CREATE_EXPRESSION 834
#define DB_BIND_EXPR_TREE 835
#define DB_CREATE_EXPR_FROM_STATIC 836
#define DB_ADD_EXPRESSION 837
#define DB_CREATE_SENSITIVITY_LIST 838
#define DB_PARALLELIZE_STATEMENT 839
#define DB_CREATE_STATEMENT 840
#define DB_ADD_STATEMENT 841
#define DB_REMOVE_STATEMENT_FROM_CURRENT_FUNIT 842
#define DB_REMOVE_STATEMENT 843
#define DB_CONNECT_STATEMENT_TRUE 844
#define DB_CONNECT_STATEMENT_FALSE 845
#define DB_GEN_ITEM_CONNECT_TRUE 846
#define DB_GEN_ITEM_CONNECT_FALSE 847
#define DB_GEN_ITEM_CONNECT 848
#define DB_STATEMENT_CONNECT 849
#define DB_CREATE_ATTR_PARAM 850
#define DB_PARSE_ATTRIBUTE 851
#define DB_REMOVE_STMT_BLKS_CALLING_STATEMENT 852
#define DB_GEN_CURR_INST_SCOPE 853
#define DB_SYNC_CURR_INSTANCE 854
#define DB_SET_VCD_SCOPE 855
#define DB_VCD_UPSCOPE 856
#define DB_ASSIGN_SYMBOL 857
#define DB_SET_SYMBOL_CHAR 858
#define DB_SET_SYMBOL_STRING 859
#define DB_DO_TIMESTEP 860
#define DB_CHECK_DUMPFILE_SCOPES 861
#define INSTANCE_DISPLAY_TREE_HELPER 862
#define INSTANCE_DISPLAY_TREE 863
#define INSTANCE_CREATE 864
#define INSTANCE_GEN_SCOPE 865
#define INSTANCE_COMPARE 866
#define INSTANCE_FIND_SCOPE 867
#define INSTANCE_FIND_BY_FUNIT 868
#define INSTANCE_FIND_BY_FUNIT_NAME_IF_ONE_HELPER 869
#define INSTANCE_FIND_BY_FUNIT_NAME_IF_ONE 870
#define INSTANCE_FIND_SIGNAL_BY_EXCLUSION_ID 871
#define INSTANCE_FIND_EXPRESSION_BY_EXCLUSION_ID 872
#define INSTANCE_FIND_FSM_ARC_INDEX_BY_EXCLUSION_ID 873
#define INSTANCE_ADD_CHILD 874
#define INSTANCE_COPY_HELPER 875
#define INSTANCE_COPY 876
#define INSTANCE_PARSE_ADD 877
#define INSTANCE_RESOLVE_INST 878
#define INSTANCE_RESOLVE_HELPER 879
#define INSTANCE_RESOLVE 880
#define INSTANCE_READ_ADD 881
#define INSTANCE_MERGE 882
#define INSTANCE_GET_LEADING_HIERARCHY 883
#define INSTANCE_MARK_LHIER_DIFFS 884
#define INSTANCE_MERGE_TWO_TREES 885
#define INSTANCE_DB_WRITE 886
#define INSTANCE_ONLY_DB_READ 887
#define INSTANCE_ONLY_DB_MERGE 888
#define INSTANCE_REMOVE_STMT_BLKS_CALLING_STMT 889
#define INSTANCE_REMOVE_PARMS_WITH_EXPR 890
#define INSTANCE_DEALLOC_SINGLE 891
#define INSTANCE_OUTPUT_DUMPVARS 892
#define INSTANCE_DEALLOC_TREE 893
#define INSTANCE_DEALLOC 894
#define MOD_PARM_FIND 895
#define MOD_PARM_FIND_EXPR_AND_REMOVE 896
#define MOD_PARM_ADD 897
#define INST_PARM_FIND 898
#define INST_PARM_ADD 899
#define INST_PARM_ADD_GENVAR 900
#define INST_PARM_BIND 901
#define DEFPARAM_ADD 902
#define DEFPARAM_DEALLOC 903
#define PARAM_FIND_AND_SET_EXPR_VALUE 904
#define PARAM_SET_SIG_SIZE 905
#define PARAM_SIZE_FUNCTION 906
#define PARAM_EXPR_EVAL 907
#define PARAM_HAS_OVERRIDE 908
#define PARAM_HAS_DEFPARAM 909
#define PARAM_RESOLVE_DECLARED 910
#define PARAM_RESOLVE_OVERRIDE 911
#define PARAM_RESOLVE_INST 912
#define PARAM_RESOLVE 913
#define PARAM_DB_WRITE 914
#define MOD_PARM_DEALLOC 915
#define INST_PARM_DEALLOC 916
#define EXPRESSION_CREATE_TMP_VECS 917
#define EXPRESSION_CREATE_NBA 918
#define EXPRESSION_IS_NBA_LHS 919
#define EXPRESSION_CREATE_VALUE 920
#define EXPRESSION_CREATE 921
#define EXPRESSION_SET_VALUE 922
#define EXPRESSION_SET_SIGNED 923
#define EXPRESSION_RESIZE 924
#define EXPRESSION_GET_ID 925
#define EXPRESSION_GET_FIRST_LINE_EXPR 926
#define EXPRESSION_GET_LAST_LINE_EXPR 927
#define EXPRESSION_GET_CURR_DIMENSION 928
#define EXPRESSION_FIND_RHS_SIGS 929
#define EXPRESSION_FIND_PARAMS 930
#define EXPRESSION_FIND_ULINE_ID 931
#define EXPRESSION_FIND_EXPR 932
#define EXPRESSION_CONTAINS_EXPR_CALLING_STMT 933
#define EXPRESSION_GET_ROOT_STATEMENT 934
#define EXPRESSION_ASSIGN_EXPR_IDS 935
#define EXPRESSION_DB_WRITE 936
#define EXPRESSION_DB_WRITE_TREE 937
#define EXPRESSION_DB_READ 938
#define EXPRESSION_DB_MERGE 939
#define EXPRESSION_MERGE 940
#define EXPRESSION_STRING_OP 941
#define EXPRESSION_STRING 942
#define EXPRESSION_OP_FUNC__XOR 943
#define EXPRESSION_OP_FUNC__XOR_A 944
#define EXPRESSION_OP_FUNC__MULTIPLY 945
#define EXPRESSION_OP_FUNC__MULTIPLY_A 946
#define EXPRESSION_OP_FUNC__DIVIDE 947
#define EXPRESSION_OP_FUNC__DIVIDE_A 948
#define EXPRESSION_OP_FUNC__MOD 949
#define EXPRESSION_OP_FUNC__MOD_A 950
#define EXPRESSION_OP_FUNC__ADD 951
#define EXPRESSION_OP_FUNC__ADD_A 952
#define EXPRESSION_OP_FUNC__SUBTRACT 953
#define EXPRESSION_OP_FUNC__SUB_A 954
#define EXPRESSION_OP_FUNC__AND 955
#define EXPRESSION_OP_FUNC__AND_A 956
#define EXPRESSION_OP_FUNC__OR 957
#define EXPRESSION_OP_FUNC__OR_A 958
#define EXPRESSION_OP_FUNC__NAND 959
#define EXPRESSION_OP_FUNC__NOR 960
#define EXPRESSION_OP_FUNC__NXOR 961
#define EXPRESSION_OP_FUNC__LT 962
#define EXPRESSION_OP_FUNC__GT 963
#define EXPRESSION_OP_FUNC__LSHIFT 964
#define EXPRESSION_OP_FUNC__LSHIFT_A 965
#define EXPRESSION_OP_FUNC__RSHIFT 966
#define EXPRESSION_OP_FUNC__RSHIFT_A 967
#define EXPRESSION_OP_FUNC__ARSHIFT 968
#define EXPRESSION_OP_FUNC__ARSHIFT_A 969
#define EXPRESSION_OP_FUNC__TIME 970
#define EXPRESSION_OP_FUNC__RANDOM 971
#define EXPRESSION_OP_FUNC__SASSIGN 972
#define EXPRESSION_OP_FUNC__SRANDOM 973
#define EXPRESSION_OP_FUNC__URANDOM 974
#define EXPRESSION_OP_FUNC__URANDOM_RANGE 975
#define EXPRESSION_OP_FUNC__REALTOBITS 976
#define EXPRESSION_OP_FUNC__BITSTOREAL 977
#define EXPRESSION_OP_FUNC__SHORTREALTOBITS 978
#define EXPRESSION_OP_FUNC__BITSTOSHORTREAL 979
#define EXPRESSION_OP_FUNC__ITOR 980
#define EXPRESSION_OP_FUNC__RTOI 981
#define EXPRESSION_OP_FUNC__TEST_PLUSARGS 982
#define EXPRESSION_OP_FUNC__VALUE_PLUSARGS 983
#define EXPRESSION_OP_FUNC__SIGNED 984
#define EXPRESSION_OP_FUNC__UNSIGNED 985
#define EXPRESSION_OP_FUNC__EQ 986
#define EXPRESSION_OP_FUNC__CEQ 987
#define EXPRESSION_OP_FUNC__LE 988
#define EXPRESSION_OP_FUNC__GE 989
#define EXPRESSION_OP_FUNC__NE 990
#define EXPRESSION_OP_FUNC__CNE 991
#define EXPRESSION_OP_FUNC__LOR 992
#define EXPRESSION_OP_FUNC__LAND 993
#define EXPRESSION_OP_FUNC__COND 994
#define EXPRESSION_OP_FUNC__COND_SEL 995
#define EXPRESSION_OP_FUNC__UINV 996
#define EXPRESSION_OP_FUNC__UAND 997
#define EXPRESSION_OP_FUNC__UNOT 998
#define EXPRESSION_OP_FUNC__UOR 999
#define EXPRESSION_OP_FUNC__UXOR 1000
#define EXPRESSION_OP_FUNC__UNAND 1001
#define EXPRESSION_OP_FUNC__UNOR 1002
#define EXPRESSION_OP_FUNC__UNXOR 1003
#define EXPRESSION_OP_FUNC__NULL 1004
#define EXPRESSION_OP_FUNC__SIG 1005
#define EXPRESSION_OP_FUNC__SBIT 1006
#define EXPRESSION_OP_FUNC__MBIT 1007
#define EXPRESSION_OP_FUNC__EXPAND 1008
#define EXPRESSION_OP_FUNC__LIST 1009
#define EXPRESSION_OP_FUNC__CONCAT 1010
#define EXPRESSION_OP_FUNC__PEDGE 1011
#define EXPRESSION_OP_FUNC__NEDGE 1012
#define EXPRESSION_OP_FUNC__AEDGE 1013
#define EXPRESSION_OP_FUNC__EOR 1014
#define EXPRESSION_OP_FUNC__SLIST 1015
#define EXPRESSION_OP_FUNC__DELAY 1016
#define EXPRESSION_OP_FUNC__TRIGGER 1017
#define EXPRESSION_OP_FUNC__CASE 1018
#define EXPRESSION_OP_FUNC__CASEX 1019
#define EXPRESSION_OP_FUNC__CASEZ 1020
#define EXPRESSION_OP_FUNC__DEFAULT 1021
#define EXPRESSION_OP_FUNC__BASSIGN 1022
#define EXPRESSION_OP_FUNC__FUNC_CALL 1023
#define EXPRESSION_OP_FUNC__TASK_CALL 1024
#define EXPRESSION_OP_FUNC__NB_CALL 1025
#define EXPRESSION_OP_FUNC__FORK 1026
#define EXPRESSION_OP_FUNC__JOIN 1027
#define EXPRESSION_OP_FUNC__DISABLE 1028
#define EXPRESSION_OP_FUNC__REPEAT 1029
#define EXPRESSION_OP_FUNC__EXPONENT 1030
#define EXPRESSION_OP_FUNC__PASSIGN 1031
#define EXPRESSION_OP_FUNC__MBIT_POS 1032
#define EXPRESSION_OP_FUNC__MBIT_NEG 1033
#define EXPRESSION_OP_FUNC__NEGATE 1034
#define EXPRESSION_OP_FUNC__IINC 1035
#define EXPRESSION_OP_FUNC__PINC 1036
#define EXPRESSION_OP_FUNC__IDEC 1037
#define EXPRESSION_OP_FUNC__PDEC 1038
#define EXPRESSION_OP_FUNC__DLY_ASSIGN 1039
#define EXPRESSION_OP_FUNC__DLY_OP 1040
#define EXPRESSION_OP_FUNC__REPEAT_DLY 1041
#define EXPRESSION_OP_FUNC__DIM 1042
#define EXPRESSION_OP_FUNC__WAIT 1043
#define EXPRESSION_OP_FUNC__FINISH 1044
#define EXPRESSION_OP_FUNC__STOP 1045
#define EXPRESSION_OPERATE 1046
#define EXPRESSION_OPERATE_RECURSIVELY 1047
#define EXPRESSION_IS_STATIC_ONLY_HELPER 1048
#define EXPRESSION_IS_ASSIGNED 1049
#define EXPRESSION_IS_BIT_SELECT 1050
#define EXPRESSION_IS_LAST_SELECT 1051
#define EXPRESSION_IS_IN_RASSIGN 1052
#define EXPRESSION_SET_ASSIGNED 1053
#define EXPRESSION_SET_CHANGED 1054
#define EXPRESSION_ASSIGN 1055
#define EXPRESSION_DEALLOC 1056

extern profiler profiles[NUM_PROFILES];
#endif

extern unsigned int profile_index;

#endif

