public btRigidBodyDoubleData getRbB() {
    long cPtr = DynamicsJNI.btTypedConstraintDoubleData_rbB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btRigidBodyDoubleData(cPtr, false);
}
