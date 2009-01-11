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

#define NUM_PROFILES 1139

#ifdef DEBUG
#define UNREGISTERED 0
#define ARC_FIND_FROM_STATE 1
#define ARC_FIND_TO_STATE 2
#define ARC_FIND_ARC 3
#define ARC_FIND_ARC_BY_EXCLUSION_ID 4
#define ARC_CREATE 5
#define ARC_ADD 6
#define ARC_STATE_HITS 7
#define ARC_TRANSITION_HITS 8
#define ARC_TRANSITION_EXCLUDED 9
#define ARC_GET_STATS 10
#define ARC_DB_WRITE 11
#define ARC_DB_READ 12
#define ARC_DB_MERGE 13
#define ARC_MERGE 14
#define ARC_GET_STATES 15
#define ARC_GET_TRANSITIONS 16
#define ARC_ARE_ANY_EXCLUDED 17
#define ARC_DEALLOC 18
#define ASSERTION_PARSE 19
#define ASSERTION_PARSE_ATTR 20
#define ASSERTION_GET_STATS 21
#define ASSERTION_DISPLAY_INSTANCE_SUMMARY 22
#define ASSERTION_INSTANCE_SUMMARY 23
#define ASSERTION_DISPLAY_FUNIT_SUMMARY 24
#define ASSERTION_FUNIT_SUMMARY 25
#define ASSERTION_DISPLAY_VERBOSE 26
#define ASSERTION_INSTANCE_VERBOSE 27
#define ASSERTION_FUNIT_VERBOSE 28
#define ASSERTION_REPORT 29
#define ASSERTION_GET_FUNIT_SUMMARY 30
#define ASSERTION_COLLECT 31
#define ASSERTION_GET_COVERAGE 32
#define ATTRIBUTE_CREATE 33
#define ATTRIBUTE_PARSE 34
#define ATTRIBUTE_DEALLOC 35
#define BIND_ADD 36
#define BIND_APPEND_FSM_EXPR 37
#define BIND_REMOVE 38
#define BIND_FIND_SIG_NAME 39
#define BIND_PARAM 40
#define BIND_SIGNAL 41
#define BIND_TASK_FUNCTION_PORTS 42
#define BIND_TASK_FUNCTION_NAMEDBLOCK 43
#define BIND_PERFORM 44
#define BIND_DEALLOC 45
#define CODEGEN_CREATE_EXPR_HELPER 46
#define CODEGEN_CREATE_EXPR 47
#define CODEGEN_GEN_EXPR1 48
#define CODEGEN_GEN_EXPR 49
#define CODEGEN_GEN_EXPR_ONE_LINE 50
#define COMBINATION_CALC_DEPTH 51
#define COMBINATION_DOES_MULTI_EXP_NEED_UL 52
#define COMBINATION_MULTI_EXPR_CALC 53
#define COMBINATION_IS_EXPR_MULTI_NODE 54
#define COMBINATION_GET_TREE_STATS 55
#define COMBINATION_RESET_COUNTED_EXPRS 56
#define COMBINATION_RESET_COUNTED_EXPR_TREE 57
#define COMBINATION_GET_STATS 58
#define COMBINATION_GET_FUNIT_SUMMARY 59
#define COMBINATION_GET_INST_SUMMARY 60
#define COMBINATION_DISPLAY_INSTANCE_SUMMARY 61
#define COMBINATION_INSTANCE_SUMMARY 62
#define COMBINATION_DISPLAY_FUNIT_SUMMARY 63
#define COMBINATION_FUNIT_SUMMARY 64
#define COMBINATION_DRAW_LINE 65
#define COMBINATION_DRAW_CENTERED_LINE 66
#define COMBINATION_UNDERLINE_TREE 67
#define COMBINATION_PREP_LINE 68
#define COMBINATION_UNDERLINE 69
#define COMBINATION_UNARY 70
#define COMBINATION_EVENT 71
#define COMBINATION_TWO_VARS 72
#define COMBINATION_MULTI_VAR_EXPRS 73
#define COMBINATION_MULTI_EXPR_OUTPUT_LENGTH 74
#define COMBINATION_MULTI_EXPR_OUTPUT 75
#define COMBINATION_MULTI_VARS 76
#define COMBINATION_GET_MISSED_EXPR 77
#define COMBINATION_LIST_MISSED 78
#define COMBINATION_OUTPUT_EXPR 79
#define COMBINATION_DISPLAY_VERBOSE 80
#define COMBINATION_INSTANCE_VERBOSE 81
#define COMBINATION_FUNIT_VERBOSE 82
#define COMBINATION_COLLECT 83
#define COMBINATION_GET_EXCLUDE_LIST 84
#define COMBINATION_GET_EXPRESSION 85
#define COMBINATION_GET_COVERAGE 86
#define COMBINATION_REPORT 87
#define DB_CREATE 88
#define DB_CLOSE 89
#define DB_CHECK_FOR_TOP_MODULE 90
#define DB_WRITE 91
#define DB_READ 92
#define DB_MERGE_INSTANCE_TREES 93
#define DB_MERGE_FUNITS 94
#define DB_SCALE_TO_PRECISION 95
#define DB_CREATE_UNNAMED_SCOPE 96
#define DB_IS_UNNAMED_SCOPE 97
#define DB_SET_TIMESCALE 98
#define DB_FIND_AND_SET_CURR_FUNIT 99
#define DB_GET_CURR_FUNIT 100
#define DB_GET_FUNIT_BY_POSITION 101
#define DB_GET_EXCLUSION_ID_SIZE 102
#define DB_GEN_EXCLUSION_ID 103
#define DB_ADD_FILE_VERSION 104
#define DB_OUTPUT_DUMPVARS 105
#define DB_ADD_INSTANCE 106
#define DB_ADD_MODULE 107
#define DB_END_MODULE 108
#define DB_ADD_FUNCTION_TASK_NAMEDBLOCK 109
#define DB_END_FUNCTION_TASK_NAMEDBLOCK 110
#define DB_ADD_DECLARED_PARAM 111
#define DB_ADD_OVERRIDE_PARAM 112
#define DB_ADD_VECTOR_PARAM 113
#define DB_ADD_DEFPARAM 114
#define DB_ADD_SIGNAL 115
#define DB_ADD_ENUM 116
#define DB_END_ENUM_LIST 117
#define DB_ADD_TYPEDEF 118
#define DB_FIND_SIGNAL 119
#define DB_ADD_GEN_ITEM_BLOCK 120
#define DB_FIND_GEN_ITEM 121
#define DB_FIND_TYPEDEF 122
#define DB_GET_CURR_GEN_BLOCK 123
#define DB_CURR_SIGNAL_COUNT 124
#define DB_CREATE_EXPRESSION 125
#define DB_BIND_EXPR_TREE 126
#define DB_CREATE_EXPR_FROM_STATIC 127
#define DB_ADD_EXPRESSION 128
#define DB_CREATE_SENSITIVITY_LIST 129
#define DB_PARALLELIZE_STATEMENT 130
#define DB_CREATE_STATEMENT 131
#define DB_ADD_STATEMENT 132
#define DB_REMOVE_STATEMENT_FROM_CURRENT_FUNIT 133
#define DB_REMOVE_STATEMENT 134
#define DB_CONNECT_STATEMENT_TRUE 135
#define DB_CONNECT_STATEMENT_FALSE 136
#define DB_GEN_ITEM_CONNECT_TRUE 137
#define DB_GEN_ITEM_CONNECT_FALSE 138
#define DB_GEN_ITEM_CONNECT 139
#define DB_STATEMENT_CONNECT 140
#define DB_CREATE_ATTR_PARAM 141
#define DB_PARSE_ATTRIBUTE 142
#define DB_REMOVE_STMT_BLKS_CALLING_STATEMENT 143
#define DB_GEN_CURR_INST_SCOPE 144
#define DB_SYNC_CURR_INSTANCE 145
#define DB_SET_VCD_SCOPE 146
#define DB_VCD_UPSCOPE 147
#define DB_ASSIGN_SYMBOL 148
#define DB_SET_SYMBOL_CHAR 149
#define DB_SET_SYMBOL_STRING 150
#define DB_DO_TIMESTEP 151
#define ENUMERATE_ADD_ITEM 152
#define ENUMERATE_END_LIST 153
#define ENUMERATE_RESOLVE 154
#define ENUMERATE_DEALLOC 155
#define ENUMERATE_DEALLOC_LIST 156
#define EXCLUDE_EXPR_ASSIGN_AND_RECALC 157
#define EXCLUDE_SIG_ASSIGN_AND_RECALC 158
#define EXCLUDE_ARC_ASSIGN_AND_RECALC 159
#define EXCLUDE_ADD_EXCLUDE_REASON 160
#define EXCLUDE_REMOVE_EXCLUDE_REASON 161
#define EXCLUDE_IS_LINE_EXCLUDED 162
#define EXCLUDE_SET_LINE_EXCLUDE 163
#define EXCLUDE_IS_TOGGLE_EXCLUDED 164
#define EXCLUDE_SET_TOGGLE_EXCLUDE 165
#define EXCLUDE_IS_COMB_EXCLUDED 166
#define EXCLUDE_SET_COMB_EXCLUDE 167
#define EXCLUDE_IS_FSM_EXCLUDED 168
#define EXCLUDE_SET_FSM_EXCLUDE 169
#define EXCLUDE_IS_ASSERT_EXCLUDED 170
#define EXCLUDE_SET_ASSERT_EXCLUDE 171
#define EXCLUDE_FIND_EXCLUDE_REASON 172
#define EXCLUDE_DB_WRITE 173
#define EXCLUDE_DB_READ 174
#define EXCLUDE_RESOLVE_REASON 175
#define EXCLUDE_DB_MERGE 176
#define EXCLUDE_MERGE 177
#define EXCLUDE_FIND_SIGNAL 178
#define EXCLUDE_FIND_EXPRESSION 179
#define EXCLUDE_FIND_FSM_ARC 180
#define EXCLUDE_FORMAT_REASON 181
#define EXCLUDED_GET_MESSAGE 182
#define EXCLUDE_HANDLE_EXCLUDE_REASON 183
#define EXCLUDE_PRINT_EXCLUSION 184
#define EXCLUDE_LINE_FROM_ID 185
#define EXCLUDE_TOGGLE_FROM_ID 186
#define EXCLUDE_MEMORY_FROM_ID 187
#define EXCLUDE_EXPR_FROM_ID 188
#define EXCLUDE_FSM_FROM_ID 189
#define EXCLUDE_ASSERT_FROM_ID 190
#define EXCLUDE_APPLY_EXCLUSIONS 191
#define COMMAND_EXCLUDE 192
#define EXPRESSION_CREATE_TMP_VECS 193
#define EXPRESSION_CREATE_VALUE 194
#define EXPRESSION_CREATE 195
#define EXPRESSION_SET_VALUE 196
#define EXPRESSION_SET_SIGNED 197
#define EXPRESSION_RESIZE 198
#define EXPRESSION_GET_ID 199
#define EXPRESSION_GET_FIRST_LINE_EXPR 200
#define EXPRESSION_GET_LAST_LINE_EXPR 201
#define EXPRESSION_GET_CURR_DIMENSION 202
#define EXPRESSION_FIND_RHS_SIGS 203
#define EXPRESSION_FIND_PARAMS 204
#define EXPRESSION_FIND_ULINE_ID 205
#define EXPRESSION_FIND_EXPR 206
#define EXPRESSION_CONTAINS_EXPR_CALLING_STMT 207
#define EXPRESSION_GET_ROOT_STATEMENT 208
#define EXPRESSION_ASSIGN_EXPR_IDS 209
#define EXPRESSION_DB_WRITE 210
#define EXPRESSION_DB_WRITE_TREE 211
#define EXPRESSION_DB_READ 212
#define EXPRESSION_DB_MERGE 213
#define EXPRESSION_MERGE 214
#define EXPRESSION_STRING_OP 215
#define EXPRESSION_STRING 216
#define EXPRESSION_OP_FUNC__XOR 217
#define EXPRESSION_OP_FUNC__XOR_A 218
#define EXPRESSION_OP_FUNC__MULTIPLY 219
#define EXPRESSION_OP_FUNC__MULTIPLY_A 220
#define EXPRESSION_OP_FUNC__DIVIDE 221
#define EXPRESSION_OP_FUNC__DIVIDE_A 222
#define EXPRESSION_OP_FUNC__MOD 223
#define EXPRESSION_OP_FUNC__MOD_A 224
#define EXPRESSION_OP_FUNC__ADD 225
#define EXPRESSION_OP_FUNC__ADD_A 226
#define EXPRESSION_OP_FUNC__SUBTRACT 227
#define EXPRESSION_OP_FUNC__SUB_A 228
#define EXPRESSION_OP_FUNC__AND 229
#define EXPRESSION_OP_FUNC__AND_A 230
#define EXPRESSION_OP_FUNC__OR 231
#define EXPRESSION_OP_FUNC__OR_A 232
#define EXPRESSION_OP_FUNC__NAND 233
#define EXPRESSION_OP_FUNC__NOR 234
#define EXPRESSION_OP_FUNC__NXOR 235
#define EXPRESSION_OP_FUNC__LT 236
#define EXPRESSION_OP_FUNC__GT 237
#define EXPRESSION_OP_FUNC__LSHIFT 238
#define EXPRESSION_OP_FUNC__LSHIFT_A 239
#define EXPRESSION_OP_FUNC__RSHIFT 240
#define EXPRESSION_OP_FUNC__RSHIFT_A 241
#define EXPRESSION_OP_FUNC__ARSHIFT 242
#define EXPRESSION_OP_FUNC__ARSHIFT_A 243
#define EXPRESSION_OP_FUNC__TIME 244
#define EXPRESSION_OP_FUNC__RANDOM 245
#define EXPRESSION_OP_FUNC__SASSIGN 246
#define EXPRESSION_OP_FUNC__SRANDOM 247
#define EXPRESSION_OP_FUNC__URANDOM 248
#define EXPRESSION_OP_FUNC__URANDOM_RANGE 249
#define EXPRESSION_OP_FUNC__REALTOBITS 250
#define EXPRESSION_OP_FUNC__BITSTOREAL 251
#define EXPRESSION_OP_FUNC__SHORTREALTOBITS 252
#define EXPRESSION_OP_FUNC__BITSTOSHORTREAL 253
#define EXPRESSION_OP_FUNC__ITOR 254
#define EXPRESSION_OP_FUNC__RTOI 255
#define EXPRESSION_OP_FUNC__TEST_PLUSARGS 256
#define EXPRESSION_OP_FUNC__VALUE_PLUSARGS 257
#define EXPRESSION_OP_FUNC__EQ 258
#define EXPRESSION_OP_FUNC__CEQ 259
#define EXPRESSION_OP_FUNC__LE 260
#define EXPRESSION_OP_FUNC__GE 261
#define EXPRESSION_OP_FUNC__NE 262
#define EXPRESSION_OP_FUNC__CNE 263
#define EXPRESSION_OP_FUNC__LOR 264
#define EXPRESSION_OP_FUNC__LAND 265
#define EXPRESSION_OP_FUNC__COND 266
#define EXPRESSION_OP_FUNC__COND_SEL 267
#define EXPRESSION_OP_FUNC__UINV 268
#define EXPRESSION_OP_FUNC__UAND 269
#define EXPRESSION_OP_FUNC__UNOT 270
#define EXPRESSION_OP_FUNC__UOR 271
#define EXPRESSION_OP_FUNC__UXOR 272
#define EXPRESSION_OP_FUNC__UNAND 273
#define EXPRESSION_OP_FUNC__UNOR 274
#define EXPRESSION_OP_FUNC__UNXOR 275
#define EXPRESSION_OP_FUNC__NULL 276
#define EXPRESSION_OP_FUNC__SIG 277
#define EXPRESSION_OP_FUNC__SBIT 278
#define EXPRESSION_OP_FUNC__MBIT 279
#define EXPRESSION_OP_FUNC__EXPAND 280
#define EXPRESSION_OP_FUNC__LIST 281
#define EXPRESSION_OP_FUNC__CONCAT 282
#define EXPRESSION_OP_FUNC__PEDGE 283
#define EXPRESSION_OP_FUNC__NEDGE 284
#define EXPRESSION_OP_FUNC__AEDGE 285
#define EXPRESSION_OP_FUNC__EOR 286
#define EXPRESSION_OP_FUNC__SLIST 287
#define EXPRESSION_OP_FUNC__DELAY 288
#define EXPRESSION_OP_FUNC__TRIGGER 289
#define EXPRESSION_OP_FUNC__CASE 290
#define EXPRESSION_OP_FUNC__CASEX 291
#define EXPRESSION_OP_FUNC__CASEZ 292
#define EXPRESSION_OP_FUNC__DEFAULT 293
#define EXPRESSION_OP_FUNC__BASSIGN 294
#define EXPRESSION_OP_FUNC__FUNC_CALL 295
#define EXPRESSION_OP_FUNC__TASK_CALL 296
#define EXPRESSION_OP_FUNC__NB_CALL 297
#define EXPRESSION_OP_FUNC__FORK 298
#define EXPRESSION_OP_FUNC__JOIN 299
#define EXPRESSION_OP_FUNC__DISABLE 300
#define EXPRESSION_OP_FUNC__REPEAT 301
#define EXPRESSION_OP_FUNC__EXPONENT 302
#define EXPRESSION_OP_FUNC__PASSIGN 303
#define EXPRESSION_OP_FUNC__MBIT_POS 304
#define EXPRESSION_OP_FUNC__MBIT_NEG 305
#define EXPRESSION_OP_FUNC__NEGATE 306
#define EXPRESSION_OP_FUNC__IINC 307
#define EXPRESSION_OP_FUNC__PINC 308
#define EXPRESSION_OP_FUNC__IDEC 309
#define EXPRESSION_OP_FUNC__PDEC 310
#define EXPRESSION_OP_FUNC__DLY_ASSIGN 311
#define EXPRESSION_OP_FUNC__DLY_OP 312
#define EXPRESSION_OP_FUNC__REPEAT_DLY 313
#define EXPRESSION_OP_FUNC__DIM 314
#define EXPRESSION_OP_FUNC__WAIT 315
#define EXPRESSION_OP_FUNC__FINISH 316
#define EXPRESSION_OP_FUNC__STOP 317
#define EXPRESSION_OPERATE 318
#define EXPRESSION_OPERATE_RECURSIVELY 319
#define EXPRESSION_VCD_ASSIGN 320
#define EXPRESSION_IS_STATIC_ONLY_HELPER 321
#define EXPRESSION_IS_ASSIGNED 322
#define EXPRESSION_IS_BIT_SELECT 323
#define EXPRESSION_IS_LAST_SELECT 324
#define EXPRESSION_IS_IN_RASSIGN 325
#define EXPRESSION_SET_ASSIGNED 326
#define EXPRESSION_SET_CHANGED 327
#define EXPRESSION_ASSIGN 328
#define EXPRESSION_DEALLOC 329
#define FSM_CREATE 330
#define FSM_ADD_ARC 331
#define FSM_CREATE_TABLES 332
#define FSM_DB_WRITE 333
#define FSM_DB_READ 334
#define FSM_DB_MERGE 335
#define FSM_MERGE 336
#define FSM_TABLE_SET 337
#define FSM_VCD_ASSIGN 338
#define FSM_GET_STATS 339
#define FSM_GET_FUNIT_SUMMARY 340
#define FSM_GET_INST_SUMMARY 341
#define FSM_GATHER_SIGNALS 342
#define FSM_COLLECT 343
#define FSM_GET_COVERAGE 344
#define FSM_DISPLAY_INSTANCE_SUMMARY 345
#define FSM_INSTANCE_SUMMARY 346
#define FSM_DISPLAY_FUNIT_SUMMARY 347
#define FSM_FUNIT_SUMMARY 348
#define FSM_DISPLAY_STATE_VERBOSE 349
#define FSM_DISPLAY_ARC_VERBOSE 350
#define FSM_DISPLAY_VERBOSE 351
#define FSM_INSTANCE_VERBOSE 352
#define FSM_FUNIT_VERBOSE 353
#define FSM_REPORT 354
#define FSM_DEALLOC 355
#define FSM_ARG_PARSE_STATE 356
#define FSM_ARG_PARSE 357
#define FSM_ARG_PARSE_VALUE 358
#define FSM_ARG_PARSE_TRANS 359
#define FSM_ARG_PARSE_ATTR 360
#define FSM_VAR_ADD 361
#define FSM_VAR_IS_OUTPUT_STATE 362
#define FSM_VAR_BIND_EXPR 363
#define FSM_VAR_ADD_EXPR 364
#define FSM_VAR_BIND_STMT 365
#define FSM_VAR_BIND_ADD 366
#define FSM_VAR_STMT_ADD 367
#define FSM_VAR_BIND 368
#define FSM_VAR_DEALLOC 369
#define FSM_VAR_REMOVE 370
#define FSM_VAR_CLEANUP 371
#define FUNC_ITER_DISPLAY 372
#define FUNC_ITER_SORT 373
#define FUNC_ITER_COUNT_STMT_ITERS 374
#define FUNC_ITER_ADD_STMT_ITERS 375
#define FUNC_ITER_ADD_SIG_LINKS 376
#define FUNC_ITER_INIT 377
#define FUNC_ITER_RESET 378
#define FUNC_ITER_GET_NEXT_STATEMENT 379
#define FUNC_ITER_GET_NEXT_SIGNAL 380
#define FUNC_ITER_DEALLOC 381
#define FUNIT_INIT 382
#define FUNIT_CREATE 383
#define FUNIT_GET_CURR_MODULE 384
#define FUNIT_GET_CURR_MODULE_SAFE 385
#define FUNIT_GET_CURR_FUNCTION 386
#define FUNIT_GET_CURR_TASK 387
#define FUNIT_GET_PORT_COUNT 388
#define FUNIT_FIND_BY_POSITION 389
#define FUNIT_FIND_PARAM 390
#define FUNIT_FIND_SIGNAL 391
#define FUNIT_REMOVE_STMT_BLKS_CALLING_STMT 392
#define FUNIT_GEN_TASK_FUNCTION_NAMEDBLOCK_NAME 393
#define FUNIT_SIZE_ELEMENTS 394
#define FUNIT_DB_WRITE 395
#define FUNIT_DB_READ 396
#define FUNIT_VERSION_DB_READ 397
#define FUNIT_DB_MERGE 398
#define FUNIT_MERGE 399
#define FUNIT_FLATTEN_NAME 400
#define FUNIT_FIND_BY_ID 401
#define FUNIT_IS_TOP_MODULE 402
#define FUNIT_IS_UNNAMED 403
#define FUNIT_IS_UNNAMED_CHILD_OF 404
#define FUNIT_IS_CHILD_OF 405
#define FUNIT_DISPLAY_SIGNALS 406
#define FUNIT_DISPLAY_EXPRESSIONS 407
#define STATEMENT_ADD_THREAD 408
#define FUNIT_PUSH_THREADS 409
#define STATEMENT_DELETE_THREAD 410
#define FUNIT_OUTPUT_DUMPVARS 411
#define FUNIT_CLEAN 412
#define FUNIT_DEALLOC 413
#define GEN_ITEM_STRINGIFY 414
#define GEN_ITEM_DISPLAY 415
#define GEN_ITEM_DISPLAY_BLOCK_HELPER 416
#define GEN_ITEM_DISPLAY_BLOCK 417
#define GEN_ITEM_COMPARE 418
#define GEN_ITEM_FIND 419
#define GEN_ITEM_REMOVE_IF_CONTAINS_EXPR_CALLING_STMT 420
#define GEN_ITEM_GET_GENVAR 421
#define GEN_ITEM_VARNAME_CONTAINS_GENVAR 422
#define GEN_ITEM_CALC_SIGNAL_NAME 423
#define GEN_ITEM_CREATE_EXPR 424
#define GEN_ITEM_CREATE_SIG 425
#define GEN_ITEM_CREATE_STMT 426
#define GEN_ITEM_CREATE_INST 427
#define GEN_ITEM_CREATE_TFN 428
#define GEN_ITEM_CREATE_BIND 429
#define GEN_ITEM_RESIZE_STMTS_AND_SIGS 430
#define GEN_ITEM_ASSIGN_IDS 431
#define GEN_ITEM_DB_WRITE 432
#define GEN_ITEM_DB_WRITE_EXPR_TREE 433
#define GEN_ITEM_CONNECT 434
#define GEN_ITEM_RESOLVE 435
#define GEN_ITEM_BIND 436
#define GENERATE_RESOLVE 437
#define GENERATE_REMOVE_STMT_HELPER 438
#define GENERATE_REMOVE_STMT 439
#define GENERATE_FIND_STMT_BY_POSITION_HELPER 440
#define GENERATE_FIND_STMT_BY_POSITION 441
#define GENERATE_FIND_TFN_BY_POSITION_HELPER 442
#define GENERATE_FIND_TFN_BY_POSITION 443
#define GEN_ITEM_DEALLOC 444
#define GENERATOR_DISPLAY 445
#define GENERATOR_CLEAR_REPLACE_PTRS 446
#define GENERATOR_REPLACE 447
#define GENERATOR_EXPR_NEEDS_TO_BE_SUBSTITUTED 448
#define GENERATOR_EXPR_COV_NEEDED 449
#define GENERATOR_CLEAR_COMB_CNTD 450
#define GENERATOR_CREATE_EXPR_NAME 451
#define GENERATOR_SORT_FUNIT_BY_FILENAME 452
#define GENERATOR_SET_NEXT_FUNIT 453
#define GENERATOR_DEALLOC_FNAME_LIST 454
#define GENERATOR_OUTPUT_FUNIT 455
#define GENERATOR_OUTPUT 456
#define GENERATOR_INIT_FUNIT 457
#define GENERATOR_PREPEND_TO_WORK_CODE 458
#define GENERATOR_ADD_TO_WORK_CODE 459
#define GENERATOR_FLUSH_WORK_CODE1 460
#define GENERATOR_ADD_TO_HOLD_CODE 461
#define GENERATOR_FLUSH_HOLD_CODE1 462
#define GENERATOR_FLUSH_ALL1 463
#define GENERATOR_FIND_STATEMENT 464
#define GENERATOR_FIND_CASE_STATEMENT 465
#define GENERATOR_INSERT_LINE_COV_WITH_STMT 466
#define GENERATOR_INSERT_LINE_COV 467
#define GENERATOR_INSERT_EVENT_COMB_COV 468
#define GENERATOR_INSERT_UNARY_COMB_COV 469
#define GENERATOR_INSERT_AND_COMB_COV 470
#define GENERATOR_GEN_MSB 471
#define GENERATOR_CREATE_RHS 472
#define GENERATOR_CONCAT_CODE 473
#define GENERATOR_CREATE_EXP 474
#define GENERATOR_INSERT_SUBEXP 475
#define GENERATOR_INSERT_COMB_COV_HELPER2 476
#define GENERATOR_INSERT_COMB_COV_HELPER 477
#define GENERATOR_GEN_MEM_INDEX 478
#define GENERATOR_GEN_MEM_SIZE 479
#define GENERATOR_INSERT_MEM_COV 480
#define GENERATOR_INSERT_MEM_COV_HELPER 481
#define GENERATOR_INSERT_COMB_COV 482
#define GENERATOR_INSERT_COMB_COV_FROM_STMT_STACK 483
#define GENERATOR_INSERT_COMB_COV_WITH_STMT 484
#define GENERATOR_INSERT_CASE_COMB_COV 485
#define GENERATOR_INSERT_FSM_COVS 486
#define GENERATOR_HANDLE_EVENT_TYPE 487
#define GENERATOR_HANDLE_EVENT_TRIGGER 488
#define SCORE_ADD_ARGS 489
#define INFO_SET_VECTOR_ELEM_SIZE 490
#define INFO_DB_WRITE 491
#define INFO_DB_READ 492
#define ARGS_DB_READ 493
#define MESSAGE_DB_READ 494
#define MERGED_CDD_DB_READ 495
#define INFO_DEALLOC 496
#define INSTANCE_DISPLAY_TREE_HELPER 497
#define INSTANCE_DISPLAY_TREE 498
#define INSTANCE_CREATE 499
#define INSTANCE_GEN_SCOPE 500
#define INSTANCE_COMPARE 501
#define INSTANCE_FIND_SCOPE 502
#define INSTANCE_FIND_BY_FUNIT 503
#define INSTANCE_FIND_BY_FUNIT_NAME_IF_ONE_HELPER 504
#define INSTANCE_FIND_BY_FUNIT_NAME_IF_ONE 505
#define INSTANCE_FIND_SIGNAL_BY_EXCLUSION_ID 506
#define INSTANCE_FIND_EXPRESSION_BY_EXCLUSION_ID 507
#define INSTANCE_FIND_FSM_ARC_INDEX_BY_EXCLUSION_ID 508
#define INSTANCE_ADD_CHILD 509
#define INSTANCE_COPY 510
#define INSTANCE_PARSE_ADD 511
#define INSTANCE_RESOLVE_INST 512
#define INSTANCE_RESOLVE_HELPER 513
#define INSTANCE_RESOLVE 514
#define INSTANCE_READ_ADD 515
#define INSTANCE_MERGE 516
#define INSTANCE_GET_LEADING_HIERARCHY 517
#define INSTANCE_MARK_LHIER_DIFFS 518
#define INSTANCE_MERGE_TWO_TREES 519
#define INSTANCE_DB_WRITE 520
#define INSTANCE_ONLY_DB_READ 521
#define INSTANCE_ONLY_DB_MERGE 522
#define INSTANCE_REMOVE_STMT_BLKS_CALLING_STMT 523
#define INSTANCE_REMOVE_PARMS_WITH_EXPR 524
#define INSTANCE_DEALLOC_SINGLE 525
#define INSTANCE_OUTPUT_DUMPVARS 526
#define INSTANCE_DEALLOC_TREE 527
#define INSTANCE_DEALLOC 528
#define STMT_ITER_RESET 529
#define STMT_ITER_COPY 530
#define STMT_ITER_NEXT 531
#define STMT_ITER_REVERSE 532
#define STMT_ITER_FIND_HEAD 533
#define STMT_ITER_GET_NEXT_IN_ORDER 534
#define STMT_ITER_GET_LINE_BEFORE 535
#define LEXER_KEYWORD_1995_CODE 536
#define LEXER_KEYWORD_2001_CODE 537
#define LEXER_KEYWORD_SV_CODE 538
#define LEXER_KEYWORD_SYS_1995_CODE 539
#define LEXER_KEYWORD_SYS_2001_CODE 540
#define LEXER_KEYWORD_SYS_SV_CODE 541
#define LEXER_CSTRING_A 542
#define LEXER_KEYWORD_A 543
#define LEXER_ESCAPED_NAME 544
#define LEXER_SYSTEM_CALL 545
#define LINE_DIRECTIVE 546
#define LINE_DIRECTIVE2 547
#define PROCESS_TIMESCALE_TOKEN 548
#define PROCESS_TIMESCALE 549
#define LEXER_YYWRAP 550
#define RESET_LEXER 551
#define RESET_LEXER_FOR_GENERATION 552
#define CHECK_FOR_PRAGMA 553
#define LINE_GET_STATS 554
#define LINE_COLLECT 555
#define LINE_GET_FUNIT_SUMMARY 556
#define LINE_GET_INST_SUMMARY 557
#define LINE_DISPLAY_INSTANCE_SUMMARY 558
#define LINE_INSTANCE_SUMMARY 559
#define LINE_DISPLAY_FUNIT_SUMMARY 560
#define LINE_FUNIT_SUMMARY 561
#define LINE_DISPLAY_VERBOSE 562
#define LINE_INSTANCE_VERBOSE 563
#define LINE_FUNIT_VERBOSE 564
#define LINE_REPORT 565
#define STR_LINK_ADD 566
#define STMT_LINK_ADD_HEAD 567
#define STMT_LINK_ADD_TAIL 568
#define STMT_LINK_MERGE 569
#define EXP_LINK_ADD 570
#define SIG_LINK_ADD 571
#define FSM_LINK_ADD 572
#define FUNIT_LINK_ADD 573
#define GITEM_LINK_ADD 574
#define INST_LINK_ADD 575
#define STR_LINK_FIND 576
#define STMT_LINK_FIND 577
#define EXP_LINK_FIND 578
#define SIG_LINK_FIND 579
#define FSM_LINK_FIND 580
#define FUNIT_LINK_FIND 581
#define GITEM_LINK_FIND 582
#define INST_LINK_FIND_BY_SCOPE 583
#define INST_LINK_FIND_BY_FUNIT 584
#define STR_LINK_REMOVE 585
#define EXP_LINK_REMOVE 586
#define GITEM_LINK_REMOVE 587
#define FUNIT_LINK_REMOVE 588
#define STR_LINK_DELETE_LIST 589
#define STMT_LINK_UNLINK 590
#define STMT_LINK_DELETE_LIST 591
#define EXP_LINK_DELETE_LIST 592
#define SIG_LINK_DELETE_LIST 593
#define FSM_LINK_DELETE_LIST 594
#define FUNIT_LINK_DELETE_LIST 595
#define GITEM_LINK_DELETE_LIST 596
#define INST_LINK_DELETE_LIST 597
#define VCDID 598
#define VCD_CALLBACK 599
#define LXT_PARSE 600
#define LXT2_RD_EXPAND_INTEGER_TO_BITS 601
#define LXT2_RD_EXPAND_BITS_TO_INTEGER 602
#define LXT2_RD_ITER_RADIX 603
#define LXT2_RD_ITER_RADIX0 604
#define LXT2_RD_BUILD_RADIX 605
#define LXT2_RD_REGENERATE_PROCESS_MASK 606
#define LXT2_RD_PROCESS_BLOCK 607
#define LXT2_RD_INIT 608
#define LXT2_RD_CLOSE 609
#define LXT2_RD_GET_FACNAME 610
#define LXT2_RD_ITER_BLOCKS 611
#define LXT2_RD_LIMIT_TIME_RANGE 612
#define LXT2_RD_UNLIMIT_TIME_RANGE 613
#define MEMORY_GET_STAT 614
#define MEMORY_GET_STATS 615
#define MEMORY_GET_FUNIT_SUMMARY 616
#define MEMORY_GET_INST_SUMMARY 617
#define MEMORY_CREATE_PDIM_BIT_ARRAY 618
#define MEMORY_GET_MEM_COVERAGE 619
#define MEMORY_GET_COVERAGE 620
#define MEMORY_COLLECT 621
#define MEMORY_DISPLAY_TOGGLE_INSTANCE_SUMMARY 622
#define MEMORY_TOGGLE_INSTANCE_SUMMARY 623
#define MEMORY_DISPLAY_AE_INSTANCE_SUMMARY 624
#define MEMORY_AE_INSTANCE_SUMMARY 625
#define MEMORY_DISPLAY_TOGGLE_FUNIT_SUMMARY 626
#define MEMORY_TOGGLE_FUNIT_SUMMARY 627
#define MEMORY_DISPLAY_AE_FUNIT_SUMMARY 628
#define MEMORY_AE_FUNIT_SUMMARY 629
#define MEMORY_DISPLAY_MEMORY 630
#define MEMORY_DISPLAY_VERBOSE 631
#define MEMORY_INSTANCE_VERBOSE 632
#define MEMORY_FUNIT_VERBOSE 633
#define MEMORY_REPORT 634
#define COMMAND_MERGE 635
#define OBFUSCATE_SET_MODE 636
#define OBFUSCATE_NAME 637
#define OBFUSCATE_DEALLOC 638
#define OVL_IS_ASSERTION_NAME 639
#define OVL_IS_ASSERTION_MODULE 640
#define OVL_IS_COVERAGE_POINT 641
#define OVL_ADD_ASSERTIONS_TO_NO_SCORE_LIST 642
#define OVL_GET_FUNIT_STATS 643
#define OVL_GET_COVERAGE_POINT 644
#define OVL_DISPLAY_VERBOSE 645
#define OVL_COLLECT 646
#define OVL_GET_COVERAGE 647
#define MOD_PARM_FIND 648
#define MOD_PARM_FIND_EXPR_AND_REMOVE 649
#define MOD_PARM_GEN_SIZE_CODE 650
#define MOD_PARM_ADD 651
#define INST_PARM_FIND 652
#define INST_PARM_ADD 653
#define INST_PARM_ADD_GENVAR 654
#define INST_PARM_BIND 655
#define DEFPARAM_ADD 656
#define DEFPARAM_DEALLOC 657
#define PARAM_FIND_AND_SET_EXPR_VALUE 658
#define PARAM_SET_SIG_SIZE 659
#define PARAM_SIZE_FUNCTION 660
#define PARAM_EXPR_EVAL 661
#define PARAM_HAS_OVERRIDE 662
#define PARAM_HAS_DEFPARAM 663
#define PARAM_RESOLVE_DECLARED 664
#define PARAM_RESOLVE_OVERRIDE 665
#define PARAM_RESOLVE 666
#define PARAM_DB_WRITE 667
#define MOD_PARM_DEALLOC 668
#define INST_PARM_DEALLOC 669
#define PARSE_READLINE 670
#define PARSE_DESIGN 671
#define PARSE_AND_SCORE_DUMPFILE 672
#define PARSER_STATIC_EXPR_PRIMARY_A 673
#define PARSER_STATIC_EXPR_PRIMARY_B 674
#define PARSER_EXPRESSION_LIST_A 675
#define PARSER_EXPRESSION_LIST_B 676
#define PARSER_EXPRESSION_LIST_C 677
#define PARSER_EXPRESSION_LIST_D 678
#define PARSER_IDENTIFIER_A 679
#define PARSER_GENERATE_CASE_ITEM_A 680
#define PARSER_GENERATE_CASE_ITEM_B 681
#define PARSER_GENERATE_CASE_ITEM_C 682
#define PARSER_STATEMENT_BEGIN_A 683
#define PARSER_STATEMENT_FORK_A 684
#define PARSER_STATEMENT_FOR_A 685
#define PARSER_CASE_ITEM_A 686
#define PARSER_CASE_ITEM_B 687
#define PARSER_CASE_ITEM_C 688
#define PARSER_DELAY_VALUE_A 689
#define PARSER_DELAY_VALUE_B 690
#define PARSER_PARAMETER_VALUE_BYNAME_A 691
#define PARSER_GATE_INSTANCE_A 692
#define PARSER_GATE_INSTANCE_B 693
#define PARSER_GATE_INSTANCE_C 694
#define PARSER_GATE_INSTANCE_D 695
#define PARSER_LIST_OF_NAMES_A 696
#define PARSER_LIST_OF_NAMES_B 697
#define PARSER_CHECK_PSTAR 698
#define PARSER_CHECK_ATTRIBUTE 699
#define PARSER_CREATE_ATTR_LIST 700
#define PARSER_CREATE_ATTR 701
#define PARSER_CREATE_TASK_DECL 702
#define PARSER_CREATE_TASK_BODY 703
#define PARSER_CREATE_FUNCTION_DECL 704
#define PARSER_CREATE_FUNCTION_BODY 705
#define PARSER_END_TASK_FUNCTION 706
#define PARSER_CREATE_PORT 707
#define PARSER_HANDLE_INLINE_PORT_ERROR 708
#define PARSER_CREATE_SIMPLE_NUMBER 709
#define PARSER_CREATE_COMPLEX_NUMBER 710
#define PARSER_APPEND_SE_PORT_LIST 711
#define PARSER_CREATE_SE_PORT_LIST 712
#define PARSER_CREATE_UNARY_SE 713
#define PARSER_CREATE_SYSCALL_SE 714
#define PARSER_CREATE_UNARY_EXP 715
#define PARSER_CREATE_BINARY_EXP 716
#define PARSER_CREATE_OP_AND_ASSIGN_EXP 717
#define PARSER_CREATE_SYSCALL_EXP 718
#define PARSER_CREATE_SYSCALL_W_PARAMS_EXP 719
#define PARSER_CREATE_OP_AND_ASSIGN_W_DIM_EXP 720
#define VLERROR 721
#define VLWARN 722
#define PARSER_DEALLOC_SIG_RANGE 723
#define PARSER_COPY_CURR_RANGE 724
#define PARSER_COPY_RANGE_TO_CURR_RANGE 725
#define PARSER_EXPLICITLY_SET_CURR_RANGE 726
#define PARSER_IMPLICITLY_SET_CURR_RANGE 727
#define PARSER_CHECK_GENERATION 728
#define PERF_GEN_STATS 729
#define PERF_OUTPUT_MOD_STATS 730
#define PERF_OUTPUT_INST_REPORT_HELPER 731
#define PERF_OUTPUT_INST_REPORT 732
#define DEF_LOOKUP 733
#define IS_DEFINED 734
#define DEF_MATCH 735
#define DEF_START 736
#define DEFINE_MACRO 737
#define DO_DEFINE 738
#define DEF_IS_DONE 739
#define DEF_FINISH 740
#define DEF_UNDEFINE 741
#define INCLUDE_FILENAME 742
#define DO_INCLUDE 743
#define YYWRAP 744
#define RESET_PPLEXER 745
#define RACE_BLK_CREATE 746
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT_HELPER 747
#define RACE_FIND_HEAD_STATEMENT_CONTAINING_STATEMENT 748
#define RACE_GET_HEAD_STATEMENT 749
#define RACE_FIND_HEAD_STATEMENT 750
#define RACE_CALC_STMT_BLK_TYPE 751
#define RACE_CALC_EXPR_ASSIGNMENT 752
#define RACE_CALC_ASSIGNMENTS 753
#define RACE_HANDLE_RACE_CONDITION 754
#define RACE_CHECK_ASSIGNMENT_TYPES 755
#define RACE_CHECK_ONE_BLOCK_ASSIGNMENT 756
#define RACE_CHECK_RACE_COUNT 757
#define RACE_CHECK_MODULES 758
#define RACE_DB_WRITE 759
#define RACE_DB_READ 760
#define RACE_GET_STATS 761
#define RACE_REPORT_SUMMARY 762
#define RACE_REPORT_VERBOSE 763
#define RACE_REPORT 764
#define RACE_COLLECT_LINES 765
#define RACE_BLK_DELETE_LIST 766
#define RANK_CREATE_COMP_CDD_COV 767
#define RANK_DEALLOC_COMP_CDD_COV 768
#define RANK_CHECK_INDEX 769
#define RANK_GATHER_SIGNAL_COV 770
#define RANK_GATHER_COMB_COV 771
#define RANK_GATHER_EXPRESSION_COV 772
#define RANK_GATHER_FSM_COV 773
#define RANK_CALC_NUM_CPS 774
#define RANK_GATHER_COMP_CDD_COV 775
#define RANK_READ_CDD 776
#define RANK_SELECTED_CDD_COV 777
#define RANK_PERFORM_WEIGHTED_SELECTION 778
#define RANK_PERFORM_GREEDY_SORT 779
#define RANK_COUNT_CPS 780
#define RANK_PERFORM 781
#define RANK_OUTPUT 782
#define COMMAND_RANK 783
#define REENTRANT_COUNT_AFU_BITS 784
#define REENTRANT_STORE_DATA_BITS 785
#define REENTRANT_RESTORE_DATA_BITS 786
#define REENTRANT_CREATE 787
#define REENTRANT_DEALLOC 788
#define REPORT_PARSE_METRICS 789
#define REPORT_PARSE_ARGS 790
#define REPORT_GATHER_INSTANCE_STATS 791
#define REPORT_GATHER_FUNIT_STATS 792
#define REPORT_PRINT_HEADER 793
#define REPORT_GENERATE 794
#define REPORT_READ_CDD_AND_READY 795
#define REPORT_CLOSE_CDD 796
#define REPORT_SAVE_CDD 797
#define REPORT_FORMAT_EXCLUSION_REASON 798
#define REPORT_OUTPUT_EXCLUSION_REASON 799
#define COMMAND_REPORT 800
#define SCOPE_FIND_FUNIT_FROM_SCOPE 801
#define SCOPE_FIND_PARAM 802
#define SCOPE_FIND_SIGNAL 803
#define SCOPE_FIND_TASK_FUNCTION_NAMEDBLOCK 804
#define SCOPE_GET_PARENT_FUNIT 805
#define SCOPE_GET_PARENT_MODULE 806
#define SCORE_GENERATE_TOP_VPI_MODULE 807
#define SCORE_GENERATE_TOP_DUMPVARS_MODULE 808
#define SCORE_GENERATE_PLI_TAB_FILE 809
#define SCORE_PARSE_DEFINE 810
#define SCORE_PARSE_ARGS 811
#define COMMAND_SCORE 812
#define SEARCH_INIT 813
#define SEARCH_ADD_INCLUDE_PATH 814
#define SEARCH_ADD_DIRECTORY_PATH 815
#define SEARCH_ADD_FILE 816
#define SEARCH_ADD_NO_SCORE_FUNIT 817
#define SEARCH_ADD_EXTENSIONS 818
#define SEARCH_FREE_LISTS 819
#define SIM_CURRENT_THREAD 820
#define SIM_THREAD_POP_HEAD 821
#define SIM_THREAD_INSERT_INTO_DELAY_QUEUE 822
#define SIM_THREAD_PUSH 823
#define SIM_EXPR_CHANGED 824
#define SIM_CREATE_THREAD 825
#define SIM_ADD_THREAD 826
#define SIM_KILL_THREAD 827
#define SIM_KILL_THREAD_WITH_FUNIT 828
#define SIM_ADD_STATICS 829
#define SIM_EXPRESSION 830
#define SIM_THREAD 831
#define SIM_SIMULATE 832
#define SIM_INITIALIZE 833
#define SIM_STOP 834
#define SIM_FINISH 835
#define SIM_DEALLOC 836
#define STATISTIC_CREATE 837
#define STATISTIC_IS_EMPTY 838
#define STATISTIC_DEALLOC 839
#define STATEMENT_CREATE 840
#define STATEMENT_QUEUE_ADD 841
#define STATEMENT_QUEUE_COMPARE 842
#define STATEMENT_SIZE_ELEMENTS 843
#define STATEMENT_DB_WRITE 844
#define STATEMENT_DB_WRITE_TREE 845
#define STATEMENT_DB_WRITE_EXPR_TREE 846
#define STATEMENT_DB_READ 847
#define STATEMENT_ASSIGN_EXPR_IDS 848
#define STATEMENT_CONNECT 849
#define STATEMENT_GET_LAST_LINE_HELPER 850
#define STATEMENT_GET_LAST_LINE 851
#define STATEMENT_FIND_RHS_SIGS 852
#define STATEMENT_FIND_HEAD_STATEMENT 853
#define STATEMENT_FIND_STATEMENT 854
#define STATEMENT_FIND_STATEMENT_BY_POSITION 855
#define STATEMENT_CONTAINS_EXPR_CALLING_STMT 856
#define STATEMENT_DEALLOC_RECURSIVE 857
#define STATEMENT_DEALLOC 858
#define STATIC_EXPR_GEN_UNARY 859
#define STATIC_EXPR_GEN 860
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_PRE 861
#define STATIC_EXPR_CALC_LSB_AND_WIDTH_POST 862
#define STATIC_EXPR_DEALLOC 863
#define STMT_BLK_ADD_TO_REMOVE_LIST 864
#define STMT_BLK_REMOVE 865
#define STMT_BLK_SPECIFY_REMOVAL_REASON 866
#define STRUCT_UNION_LENGTH 867
#define STRUCT_UNION_ADD_MEMBER 868
#define STRUCT_UNION_ADD_MEMBER_VOID 869
#define STRUCT_UNION_ADD_MEMBER_SIG 870
#define STRUCT_UNION_ADD_MEMBER_TYPEDEF 871
#define STRUCT_UNION_ADD_MEMBER_ENUM 872
#define STRUCT_UNION_ADD_MEMBER_STRUCT_UNION 873
#define STRUCT_UNION_CREATE 874
#define STRUCT_UNION_MEMBER_DEALLOC 875
#define STRUCT_UNION_DEALLOC 876
#define STRUCT_UNION_DEALLOC_LIST 877
#define SYMTABLE_ADD_SYM_SIG 878
#define SYMTABLE_ADD_SYM_EXP 879
#define SYMTABLE_ADD_SYM_FSM 880
#define SYMTABLE_INIT 881
#define SYMTABLE_CREATE 882
#define SYMTABLE_GET_TABLE 883
#define SYMTABLE_ADD_SIGNAL 884
#define SYMTABLE_ADD_EXPRESSION 885
#define SYMTABLE_ADD_MEMORY 886
#define SYMTABLE_ADD_FSM 887
#define SYMTABLE_SET_VALUE 888
#define SYMTABLE_ASSIGN 889
#define SYMTABLE_DEALLOC 890
#define SYS_TASK_UNIFORM 891
#define SYS_TASK_RTL_DIST_UNIFORM 892
#define SYS_TASK_SRANDOM 893
#define SYS_TASK_RANDOM 894
#define SYS_TASK_URANDOM 895
#define SYS_TASK_URANDOM_RANGE 896
#define SYS_TASK_REALTOBITS 897
#define SYS_TASK_BITSTOREAL 898
#define SYS_TASK_SHORTREALTOBITS 899
#define SYS_TASK_BITSTOSHORTREAL 900
#define SYS_TASK_ITOR 901
#define SYS_TASK_RTOI 902
#define SYS_TASK_STORE_PLUSARGS 903
#define SYS_TASK_TEST_PLUSARG 904
#define SYS_TASK_VALUE_PLUSARGS 905
#define SYS_TASK_DEALLOC 906
#define TCL_FUNC_GET_RACE_REASON_MSGS 907
#define TCL_FUNC_GET_FUNIT_LIST 908
#define TCL_FUNC_GET_INSTANCES 909
#define TCL_FUNC_GET_INSTANCE_LIST 910
#define TCL_FUNC_IS_FUNIT 911
#define TCL_FUNC_GET_FUNIT 912
#define TCL_FUNC_GET_INST 913
#define TCL_FUNC_GET_FUNIT_NAME 914
#define TCL_FUNC_GET_FILENAME 915
#define TCL_FUNC_INST_SCOPE 916
#define TCL_FUNC_GET_FUNIT_START_AND_END 917
#define TCL_FUNC_COLLECT_UNCOVERED_LINES 918
#define TCL_FUNC_COLLECT_COVERED_LINES 919
#define TCL_FUNC_COLLECT_RACE_LINES 920
#define TCL_FUNC_COLLECT_UNCOVERED_TOGGLES 921
#define TCL_FUNC_COLLECT_COVERED_TOGGLES 922
#define TCL_FUNC_COLLECT_UNCOVERED_MEMORIES 923
#define TCL_FUNC_COLLECT_COVERED_MEMORIES 924
#define TCL_FUNC_GET_TOGGLE_COVERAGE 925
#define TCL_FUNC_GET_MEMORY_COVERAGE 926
#define TCL_FUNC_COLLECT_UNCOVERED_COMBS 927
#define TCL_FUNC_COLLECT_COVERED_COMBS 928
#define TCL_FUNC_GET_COMB_EXPRESSION 929
#define TCL_FUNC_GET_COMB_COVERAGE 930
#define TCL_FUNC_COLLECT_UNCOVERED_FSMS 931
#define TCL_FUNC_COLLECT_COVERED_FSMS 932
#define TCL_FUNC_GET_FSM_COVERAGE 933
#define TCL_FUNC_COLLECT_UNCOVERED_ASSERTIONS 934
#define TCL_FUNC_COLLECT_COVERED_ASSERTIONS 935
#define TCL_FUNC_GET_ASSERT_COVERAGE 936
#define TCL_FUNC_OPEN_CDD 937
#define TCL_FUNC_CLOSE_CDD 938
#define TCL_FUNC_SAVE_CDD 939
#define TCL_FUNC_MERGE_CDD 940
#define TCL_FUNC_GET_LINE_SUMMARY 941
#define TCL_FUNC_GET_TOGGLE_SUMMARY 942
#define TCL_FUNC_GET_MEMORY_SUMMARY 943
#define TCL_FUNC_GET_COMB_SUMMARY 944
#define TCL_FUNC_GET_FSM_SUMMARY 945
#define TCL_FUNC_GET_ASSERT_SUMMARY 946
#define TCL_FUNC_PREPROCESS_VERILOG 947
#define TCL_FUNC_GET_SCORE_PATH 948
#define TCL_FUNC_GET_INCLUDE_PATHNAME 949
#define TCL_FUNC_GET_GENERATION 950
#define TCL_FUNC_SET_LINE_EXCLUDE 951
#define TCL_FUNC_SET_TOGGLE_EXCLUDE 952
#define TCL_FUNC_SET_MEMORY_EXCLUDE 953
#define TCL_FUNC_SET_COMB_EXCLUDE 954
#define TCL_FUNC_FSM_EXCLUDE 955
#define TCL_FUNC_SET_ASSERT_EXCLUDE 956
#define TCL_FUNC_GENERATE_REPORT 957
#define TCL_FUNC_INITIALIZE 958
#define TOGGLE_GET_STATS 959
#define TOGGLE_COLLECT 960
#define TOGGLE_GET_COVERAGE 961
#define TOGGLE_GET_FUNIT_SUMMARY 962
#define TOGGLE_GET_INST_SUMMARY 963
#define TOGGLE_DISPLAY_INSTANCE_SUMMARY 964
#define TOGGLE_INSTANCE_SUMMARY 965
#define TOGGLE_DISPLAY_FUNIT_SUMMARY 966
#define TOGGLE_FUNIT_SUMMARY 967
#define TOGGLE_DISPLAY_VERBOSE 968
#define TOGGLE_INSTANCE_VERBOSE 969
#define TOGGLE_FUNIT_VERBOSE 970
#define TOGGLE_REPORT 971
#define TREE_ADD 972
#define TREE_FIND 973
#define TREE_REMOVE 974
#define TREE_DEALLOC 975
#define CHECK_OPTION_VALUE 976
#define IS_VARIABLE 977
#define IS_FUNC_UNIT 978
#define IS_LEGAL_FILENAME 979
#define GET_BASENAME 980
#define GET_DIRNAME 981
#define GET_ABSOLUTE_PATH 982
#define GET_RELATIVE_PATH 983
#define DIRECTORY_EXISTS 984
#define DIRECTORY_LOAD 985
#define FILE_EXISTS 986
#define UTIL_READLINE 987
#define GET_QUOTED_STRING 988
#define SUBSTITUTE_ENV_VARS 989
#define SCOPE_EXTRACT_FRONT 990
#define SCOPE_EXTRACT_BACK 991
#define SCOPE_EXTRACT_SCOPE 992
#define SCOPE_GEN_PRINTABLE 993
#define SCOPE_COMPARE 994
#define SCOPE_LOCAL 995
#define CONVERT_FILE_TO_MODULE 996
#define GET_NEXT_VFILE 997
#define GEN_SPACE 998
#define REMOVE_UNDERSCORES 999
#define GET_FUNIT_TYPE 1000
#define CALC_MISS_PERCENT 1001
#define READ_COMMAND_FILE 1002
#define CONVERT_STR_TO_UINT64 1003
#define CALC_NUM_BITS_TO_STORE 1004
#define VCD_CALC_INDEX 1005
#define VCD_PARSE_DEF_IGNORE 1006
#define VCD_PARSE_DEF_VAR 1007
#define VCD_PARSE_DEF_SCOPE 1008
#define VCD_PARSE_DEF 1009
#define VCD_PARSE_SIM_VECTOR 1010
#define VCD_PARSE_SIM_REAL 1011
#define VCD_PARSE_SIM_IGNORE 1012
#define VCD_PARSE_SIM 1013
#define VCD_PARSE 1014
#define VECTOR_INIT 1015
#define VECTOR_INT_R64 1016
#define VECTOR_INT_R32 1017
#define VECTOR_CREATE 1018
#define VECTOR_COPY 1019
#define VECTOR_COPY_RANGE 1020
#define VECTOR_CLONE 1021
#define VECTOR_DB_WRITE 1022
#define VECTOR_DB_READ 1023
#define VECTOR_DB_MERGE 1024
#define VECTOR_MERGE 1025
#define VECTOR_GET_EVAL_A 1026
#define VECTOR_GET_EVAL_B 1027
#define VECTOR_GET_EVAL_C 1028
#define VECTOR_GET_EVAL_D 1029
#define VECTOR_GET_EVAL_AB_COUNT 1030
#define VECTOR_GET_EVAL_ABC_COUNT 1031
#define VECTOR_GET_EVAL_ABCD_COUNT 1032
#define VECTOR_GET_TOGGLE01_ULONG 1033
#define VECTOR_GET_TOGGLE10_ULONG 1034
#define VECTOR_DISPLAY_TOGGLE01_ULONG 1035
#define VECTOR_DISPLAY_TOGGLE10_ULONG 1036
#define VECTOR_TOGGLE_COUNT 1037
#define VECTOR_MEM_RW_COUNT 1038
#define VECTOR_SET_ASSIGNED 1039
#define VECTOR_SET_COVERAGE_AND_ASSIGN 1040
#define VECTOR_GET_SIGN_EXTEND_VECTOR_ULONG 1041
#define VECTOR_SIGN_EXTEND_ULONG 1042
#define VECTOR_LSHIFT_ULONG 1043
#define VECTOR_RSHIFT_ULONG 1044
#define VECTOR_SET_VALUE 1045
#define VECTOR_SET_MEM_RD 1046
#define VECTOR_PART_SELECT_PULL 1047
#define VECTOR_PART_SELECT_PUSH 1048
#define VECTOR_SET_UNARY_EVALS 1049
#define VECTOR_SET_AND_COMB_EVALS 1050
#define VECTOR_SET_OR_COMB_EVALS 1051
#define VECTOR_SET_OTHER_COMB_EVALS 1052
#define VECTOR_IS_UKNOWN 1053
#define VECTOR_IS_NOT_ZERO 1054
#define VECTOR_SET_TO_X 1055
#define VECTOR_TO_INT 1056
#define VECTOR_TO_UINT64 1057
#define VECTOR_TO_REAL64 1058
#define VECTOR_TO_SIM_TIME 1059
#define VECTOR_FROM_INT 1060
#define VECTOR_FROM_UINT64 1061
#define VECTOR_FROM_REAL64 1062
#define VECTOR_SET_STATIC 1063
#define VECTOR_TO_STRING 1064
#define VECTOR_FROM_STRING_FIXED 1065
#define VECTOR_FROM_STRING 1066
#define VECTOR_VCD_ASSIGN 1067
#define VECTOR_VCD_ASSIGN2 1068
#define VECTOR_BITWISE_AND_OP 1069
#define VECTOR_BITWISE_NAND_OP 1070
#define VECTOR_BITWISE_OR_OP 1071
#define VECTOR_BITWISE_NOR_OP 1072
#define VECTOR_BITWISE_XOR_OP 1073
#define VECTOR_BITWISE_NXOR_OP 1074
#define VECTOR_OP_LT 1075
#define VECTOR_OP_LE 1076
#define VECTOR_OP_GT 1077
#define VECTOR_OP_GE 1078
#define VECTOR_OP_EQ 1079
#define VECTOR_CEQ_ULONG 1080
#define VECTOR_OP_CEQ 1081
#define VECTOR_OP_CXEQ 1082
#define VECTOR_OP_CZEQ 1083
#define VECTOR_OP_NE 1084
#define VECTOR_OP_CNE 1085
#define VECTOR_OP_LOR 1086
#define VECTOR_OP_LAND 1087
#define VECTOR_OP_LSHIFT 1088
#define VECTOR_OP_RSHIFT 1089
#define VECTOR_OP_ARSHIFT 1090
#define VECTOR_OP_ADD 1091
#define VECTOR_OP_NEGATE 1092
#define VECTOR_OP_SUBTRACT 1093
#define VECTOR_OP_MULTIPLY 1094
#define VECTOR_OP_DIVIDE 1095
#define VECTOR_OP_MODULUS 1096
#define VECTOR_OP_INC 1097
#define VECTOR_OP_DEC 1098
#define VECTOR_UNARY_INV 1099
#define VECTOR_UNARY_AND 1100
#define VECTOR_UNARY_NAND 1101
#define VECTOR_UNARY_OR 1102
#define VECTOR_UNARY_NOR 1103
#define VECTOR_UNARY_XOR 1104
#define VECTOR_UNARY_NXOR 1105
#define VECTOR_UNARY_NOT 1106
#define VECTOR_OP_EXPAND 1107
#define VECTOR_OP_LIST 1108
#define VECTOR_DEALLOC_VALUE 1109
#define VECTOR_DEALLOC 1110
#define SYM_VALUE_STORE 1111
#define ADD_SYM_VALUES_TO_SIM 1112
#define COVERED_VALUE_CHANGE_BIN 1113
#define COVERED_VALUE_CHANGE_REAL 1114
#define COVERED_END_OF_SIM 1115
#define COVERED_CB_ERROR_HANDLER 1116
#define GEN_NEXT_SYMBOL 1117
#define COVERED_CREATE_VALUE_CHANGE_CB 1118
#define COVERED_PARSE_TASK_FUNC 1119
#define COVERED_PARSE_SIGNALS 1120
#define COVERED_PARSE_INSTANCE 1121
#define COVERED_SIM_CALLTF 1122
#define COVERED_REGISTER 1123
#define VSIGNAL_INIT 1124
#define VSIGNAL_CREATE 1125
#define VSIGNAL_CREATE_VEC 1126
#define VSIGNAL_DUPLICATE 1127
#define VSIGNAL_DB_WRITE 1128
#define VSIGNAL_DB_READ 1129
#define VSIGNAL_DB_MERGE 1130
#define VSIGNAL_MERGE 1131
#define VSIGNAL_PROPAGATE 1132
#define VSIGNAL_VCD_ASSIGN 1133
#define VSIGNAL_ADD_EXPRESSION 1134
#define VSIGNAL_FROM_STRING 1135
#define VSIGNAL_CALC_WIDTH_FOR_EXPR 1136
#define VSIGNAL_CALC_LSB_FOR_EXPR 1137
#define VSIGNAL_DEALLOC 1138

extern profiler profiles[NUM_PROFILES];
#endif

extern unsigned int profile_index;

#endif

