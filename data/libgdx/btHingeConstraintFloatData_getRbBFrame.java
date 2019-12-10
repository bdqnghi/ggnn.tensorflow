public btTransformFloatData getRbBFrame() {
    long cPtr = DynamicsJNI.btHingeConstraintFloatData_rbBFrame_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformFloatData(cPtr, false);
}
