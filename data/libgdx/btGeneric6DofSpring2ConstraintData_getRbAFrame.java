public btTransformFloatData getRbAFrame() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_rbAFrame_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformFloatData(cPtr, false);
}
