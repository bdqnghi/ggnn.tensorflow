public btTransformDoubleData getRbAFrame() {
    long cPtr = DynamicsJNI.btHingeConstraintDoubleData_rbAFrame_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformDoubleData(cPtr, false);
}
