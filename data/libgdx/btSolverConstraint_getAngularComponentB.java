public btVector3 getAngularComponentB() {
    long cPtr = DynamicsJNI.btSolverConstraint_angularComponentB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
