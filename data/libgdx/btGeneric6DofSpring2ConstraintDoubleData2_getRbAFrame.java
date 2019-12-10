public btTransformDoubleData getRbAFrame() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_rbAFrame_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformDoubleData(cPtr, false);
}
