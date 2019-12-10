public btRigidBodyFloatData getRbA() {
    long cPtr = DynamicsJNI.btTypedConstraintFloatData_rbA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btRigidBodyFloatData(cPtr, false);
}
