public btTransformDoubleData getRbBFrame() {
    long cPtr = DynamicsJNI.btHingeConstraintDoubleData_rbBFrame_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformDoubleData(cPtr, false);
}
