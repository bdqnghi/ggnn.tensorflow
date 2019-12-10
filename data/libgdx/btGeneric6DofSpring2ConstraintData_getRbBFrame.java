public btTransformFloatData getRbBFrame() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_rbBFrame_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformFloatData(cPtr, false);
}
