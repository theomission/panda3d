// Filename: mkdir_complete.h
// Created by:  drose (29Jun09)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

#ifndef MKDIR_COMPLETE_H
#define MKDIR_COMPLETE_H

#include <string>
using namespace std;

bool mkdir_complete(const string &dirname);
bool mkfile_complete(const string &dirname);

#endif

