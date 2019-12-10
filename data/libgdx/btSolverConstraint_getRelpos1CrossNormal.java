public btVector3 getRelpos1CrossNormal() {
    long cPtr = DynamicsJNI.btSolverConstraint_relpos1CrossNormal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
