public btWheelInfo addWheel(Vector3 connectionPointCS0, Vector3 wheelDirectionCS0, Vector3 wheelAxleCS, float suspensionRestLength, float wheelRadius, btRaycastVehicle.btVehicleTuning tuning, boolean isFrontWheel) {
    return new btWheelInfo(DynamicsJNI.btRaycastVehicle_addWheel(swigCPtr, this, connectionPointCS0, wheelDirectionCS0, wheelAxleCS, suspensionRestLength, wheelRadius, btRaycastVehicle.btVehicleTuning.getCPtr(tuning), tuning, isFrontWheel), false);
}
