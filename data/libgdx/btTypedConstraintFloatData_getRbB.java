public btRigidBodyFloatData getRbB() {
    long cPtr = DynamicsJNI.btTypedConstraintFloatData_rbB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btRigidBodyFloatData(cPtr, false);
}
