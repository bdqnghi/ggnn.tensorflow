public btVector3 getContactNormal2() {
    long cPtr = DynamicsJNI.btSolverConstraint_contactNormal2_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
