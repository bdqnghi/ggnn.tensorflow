public btVector3 getContactNormal1() {
    long cPtr = DynamicsJNI.btSolverConstraint_contactNormal1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
