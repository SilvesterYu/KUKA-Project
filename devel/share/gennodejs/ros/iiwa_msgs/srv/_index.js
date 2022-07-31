
"use strict";

let SetSmartServoLinSpeedLimits = require('./SetSmartServoLinSpeedLimits.js')
let SetEndpointFrame = require('./SetEndpointFrame.js')
let SetPTPJointSpeedLimits = require('./SetPTPJointSpeedLimits.js')
let SetWorkpiece = require('./SetWorkpiece.js')
let SetSmartServoJointSpeedLimits = require('./SetSmartServoJointSpeedLimits.js')
let SetPTPCartesianSpeedLimits = require('./SetPTPCartesianSpeedLimits.js')
let TimeToDestination = require('./TimeToDestination.js')
let ConfigureControlMode = require('./ConfigureControlMode.js')
let SetSpeedOverride = require('./SetSpeedOverride.js')

module.exports = {
  SetSmartServoLinSpeedLimits: SetSmartServoLinSpeedLimits,
  SetEndpointFrame: SetEndpointFrame,
  SetPTPJointSpeedLimits: SetPTPJointSpeedLimits,
  SetWorkpiece: SetWorkpiece,
  SetSmartServoJointSpeedLimits: SetSmartServoJointSpeedLimits,
  SetPTPCartesianSpeedLimits: SetPTPCartesianSpeedLimits,
  TimeToDestination: TimeToDestination,
  ConfigureControlMode: ConfigureControlMode,
  SetSpeedOverride: SetSpeedOverride,
};
