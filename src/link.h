#ifndef __LINK_H__
#define __LINK_H__

/*!
 \file     link.h
 \author   Trevor Williams  (trevorw@charter.net)
 \date     11/28/2001
 \brief    Contains functions to manipulate a linked lists.
*/

#include "defines.h"


/*! \brief Adds specified string to str_link element at the end of the list. */
void str_link_add( char* str, str_link** head, str_link** tail );

/*! \brief Adds specified statement to stmt_link element at the beginning of the list. */
void stmt_link_add_head( statement* stmt, stmt_link** head, stmt_link** tail );

/*! \brief Adds specified statement to stmt_link element at the end of the list. */
void stmt_link_add_tail( statement* stmt, stmt_link** head, stmt_link** tail );

/*! \brief Adds specified expression to exp_link element at the end of the list. */
void exp_link_add( expression* expr, exp_link** head, exp_link** tail );

/*! \brief Adds specified signal to sig_link element at the end of the list. */
void sig_link_add( vsignal* sig, sig_link** head, sig_link** tail );

/*! \brief Adds specified module to mod_link element at the end of the list. */
void mod_link_add( module* mod, mod_link** head, mod_link** tail );


/*! \brief Displays specified string list to standard output. */
void str_link_display( str_link* head );

/*! \brief Displays specified statement list to standard output. */
void stmt_link_display( stmt_link* head );

/*! \brief Displays specified expression list to standard output. */
void exp_link_display( exp_link* head );

/*! \brief Displays specified signal list to standard output. */
void sig_link_display( sig_link* head );

/*! \brief Displays specified module list to standard output. */
void mod_link_display( mod_link* head );


/*! \brief Finds specified string in the given str_link list. */
str_link* str_link_find( char* value, str_link* head );

/*! \brief Finds specified statement in the given stmt_link list. */
stmt_link* stmt_link_find( int id, stmt_link* head );

/*! \brief Finds specified expression in the given exp_link list. */
exp_link* exp_link_find( expression* exp, exp_link* head );

/*! \brief Finds specified signal in given sig_link list. */
sig_link* sig_link_find( vsignal* sig, sig_link* head );

/*! \brief Finds specified module in given mod_link list. */
mod_link* mod_link_find( module* mod, mod_link* head );


/*! \brief Searches for and removes specified string link from list. */
void str_link_remove( char* str, str_link** head, str_link** tail );

/*! \brief Searches for and removes specified expression link from list. */
void exp_link_remove( expression* exp, exp_link** head, exp_link** tail, bool recursive );


/*! \brief Deletes entire list specified by head pointer. */
void str_link_delete_list( str_link* head );

/*! \brief Deletes entire list specified by head pointer. */
void stmt_link_delete_list( stmt_link* head );

/*! \brief Deletes entire list specified by head pointer. */
void exp_link_delete_list( exp_link* head, bool del_exp );

/*! \brief Deletes entire list specified by head pointer. */
void sig_link_delete_list( sig_link* head, bool del_sig );

/*! \brief Deletes entire list specified by head pointer. */
void mod_link_delete_list( mod_link* head );


/*
 $Log$
 Revision 1.10.2.1  2004/04/02 19:37:45  phase1geo
 Updating CVS 0_2_2 branch with changes since 0.2 release.  Also renaming
 signal to vsignal in release to fix bug where some OS's have a signal.h
 in the /usr/include directory that get compiled in with the unistd.h included
 by util.c.  This is the prelude to the 0.2.3 stable release.  Updated NEWS.

 Revision 1.10  2003/08/05 20:25:05  phase1geo
 Fixing non-blocking bug and updating regression files according to the fix.
 Also added function vector_is_unknown() which can be called before making
 a call to vector_to_int() which will eleviate any X/Z-values causing problems
 with this conversion.  Additionally, the real1.1 regression report files were
 updated.

 Revision 1.9  2003/02/07 02:28:23  phase1geo
 Fixing bug with statement removal.  Expressions were being deallocated but not properly
 removed from module parameter expression lists and module expression lists.  Regression
 now passes again.

 Revision 1.8  2003/01/03 02:07:43  phase1geo
 Fixing segmentation fault in lexer caused by not closing the temporary
 input file before unlinking it.  Fixed case where module was parsed but not
 at the head of the module list.

 Revision 1.7  2002/11/05 00:20:07  phase1geo
 Adding development documentation.  Fixing problem with combinational logic
 output in report command and updating full regression.

 Revision 1.6  2002/10/31 23:13:56  phase1geo
 Fixing C compatibility problems with cc and gcc.  Found a few possible problems
 with 64-bit vs. 32-bit compilation of the tool.  Fixed bug in parser that
 lead to bus errors.  Ran full regression in 64-bit mode without error.

 Revision 1.5  2002/10/29 19:57:50  phase1geo
 Fixing problems with beginning block comments within comments which are
 produced automatically by CVS.  Should fix warning messages from compiler.

 Revision 1.4  2002/07/18 22:02:35  phase1geo
 In the middle of making improvements/fixes to the expression/signal
 binding phase.

 Revision 1.3  2002/06/25 03:39:03  phase1geo
 Fixed initial scoring bugs.  We now generate a legal CDD file for reporting.
 Fixed some report bugs though there are still some remaining.

 Revision 1.2  2002/05/03 03:39:36  phase1geo
 Removing all syntax errors due to addition of statements.  Added more statement
 support code.  Still have a ways to go before we can try anything.  Removed lines
 from expressions though we may want to consider putting these back for reporting
 purposes.
*/

#endif

