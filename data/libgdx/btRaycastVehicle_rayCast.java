public float rayCast(btWheelInfo wheel) {
    return DynamicsJNI.btRaycastVehicle_rayCast(swigCPtr, this, btWheelInfo.getCPtr(wheel), wheel);
}
