// Filename: config_vrpn.cxx
// Created by:  jason (07Aug00)
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

#include "config_vrpn.h"
#include "vrpnAnalogDevice.h"
#include "vrpnButtonDevice.h"
#include "vrpnClient.h"
#include "vrpnDialDevice.h"
#include "vrpnTrackerDevice.h"
#include "pandaSystem.h"

#include "dconfig.h"

Configure(config_vrpn);
NotifyCategoryDef(vrpn, "");


ConfigureFn(config_vrpn) {
  VrpnAnalogDevice::init_type();
  VrpnButtonDevice::init_type();
  VrpnClient::init_type();
  VrpnDialDevice::init_type();
  VrpnTrackerDevice::init_type();

  PandaSystem *ps = PandaSystem::get_global_ptr();
  ps->add_system("VRPN");
}
