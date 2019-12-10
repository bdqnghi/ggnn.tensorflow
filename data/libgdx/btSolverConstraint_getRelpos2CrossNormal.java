public btVector3 getRelpos2CrossNormal() {
    long cPtr = DynamicsJNI.btSolverConstraint_relpos2CrossNormal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
