#ifndef __PARSE_H__
#define __PARSE_H__

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
 \file     parse.h
 \author   Trevor Williams  (phase1geo@gmail.com)
 \date     11/27/2001
 \brief    Contains functions for parsing Verilog modules
*/

#include "defines.h"


/*! \brief Parses the specified design and generates scoring modules. */
void parse_design(
  const char* top,
  const char* output_db
);

/*! \brief Parses VCD dumpfile and scores design. */
void parse_and_score_dumpfile(
  const char* db,
  const char* dump_file,
  int         dump_mode
);


/*
 $Log$
 Revision 1.11  2008/03/11 22:06:48  phase1geo
 Finishing first round of exception handling code.

 Revision 1.10  2008/01/16 23:10:31  phase1geo
 More splint updates.  Code is now warning/error free with current version
 of run_splint.  Still have regression issues to debug.

 Revision 1.9  2007/11/20 05:28:59  phase1geo
 Updating e-mail address from trevorw@charter.net to phase1geo@gmail.com.

 Revision 1.8  2006/03/28 22:28:27  phase1geo
 Updates to user guide and added copyright information to each source file in the
 src directory.  Added test directory in user documentation directory containing the
 example used in line, toggle, combinational logic and FSM descriptions.

 Revision 1.7  2006/01/25 22:13:46  phase1geo
 Adding LXT-style dumpfile parsing support.  Everything is wired in but I still
 need to look at a problem at the end of the dumpfile -- I'm getting coredumps
 when using the new -lxt option.  I also need to disable LXT code if the z
 library is missing along with documenting the new feature in the user's guide
 and man page.

 Revision 1.6  2002/11/05 00:20:07  phase1geo
 Adding development documentation.  Fixing problem with combinational logic
 output in report command and updating full regression.

 Revision 1.5  2002/10/31 23:14:13  phase1geo
 Fixing C compatibility problems with cc and gcc.  Found a few possible problems
 with 64-bit vs. 32-bit compilation of the tool.  Fixed bug in parser that
 lead to bus errors.  Ran full regression in 64-bit mode without error.

 Revision 1.4  2002/10/29 19:57:51  phase1geo
 Fixing problems with beginning block comments within comments which are
 produced automatically by CVS.  Should fix warning messages from compiler.

 Revision 1.3  2002/07/20 21:34:58  phase1geo
 Separating ability to parse design and score dumpfile.  Now both or either
 can be done (allowing one to parse once and score multiple times).

 Revision 1.2  2002/07/03 03:31:11  phase1geo
 Adding RCS Log strings in files that were missing them so that file version
 information is contained in every source and header file.  Reordering src
 Makefile to be alphabetical.  Adding mult1.v diagnostic to regression suite.
*/

#endif
