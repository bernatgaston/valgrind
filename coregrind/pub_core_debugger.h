
/*--------------------------------------------------------------------*/
/*--- Attaching a debugger.                    pub_core_debugger.h ---*/
/*--------------------------------------------------------------------*/

/*
   This file is part of Valgrind, a dynamic binary instrumentation
   framework.

   Copyright (C) 2000-2013 Julian Seward
      jseward@acm.org

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307, USA.

   The GNU General Public License is contained in the file COPYING.
*/

#ifndef __PUB_CORE_DEBUGGER_H
#define __PUB_CORE_DEBUGGER_H

//--------------------------------------------------------------------
// PURPOSE: This simple module just deals with attaching a debugger to the
// running program.
//--------------------------------------------------------------------

#include "pub_core_basics.h"      // ThreadId

extern void VG_(start_debugger) ( ThreadId tid );

#endif   // __PUB_CORE_DEBUGGER_H

/*--------------------------------------------------------------------*/
/*--- end                                                          ---*/
/*--------------------------------------------------------------------*/
