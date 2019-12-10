public btVector3 getAngularComponentA() {
    long cPtr = DynamicsJNI.btSolverConstraint_angularComponentA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
