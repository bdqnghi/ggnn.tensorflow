public Matrix4 getWheelTransformWS(int wheelIndex) {
    return DynamicsJNI.btRaycastVehicle_getWheelTransformWS(swigCPtr, this, wheelIndex);
}
