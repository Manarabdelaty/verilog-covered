#ifndef __PARSE_H__
#define __PARSE_H__

/*!
 \file     parse.h
 \author   Trevor Williams  (trevorw@charter.net)
 \date     11/27/2001
 \brief    Contains functions for parsing Verilog modules
*/

#include "defines.h"
#include "link.h"


//! Parses the specified design and generates scoring modules.
bool parse_design( char* top, char* output_db );

//! Parses VCD dumpfile and scores design.
bool parse_and_score_dumpfile( char* top, char* db, char* vcd );

/* $Log$
/* Revision 1.2  2002/07/03 03:31:11  phase1geo
/* Adding RCS Log strings in files that were missing them so that file version
/* information is contained in every source and header file.  Reordering src
/* Makefile to be alphabetical.  Adding mult1.v diagnostic to regression suite.
/* */

#endif

