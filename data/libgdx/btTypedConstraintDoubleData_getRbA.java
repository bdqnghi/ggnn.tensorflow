public btRigidBodyDoubleData getRbA() {
    long cPtr = DynamicsJNI.btTypedConstraintDoubleData_rbA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btRigidBodyDoubleData(cPtr, false);
}
