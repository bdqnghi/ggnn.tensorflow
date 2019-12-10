public btVector3 getTurnVelocity() {
    long cPtr = DynamicsJNI.btSolverBody_turnVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
