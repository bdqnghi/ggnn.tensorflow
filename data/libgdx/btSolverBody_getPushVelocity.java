public btVector3 getPushVelocity() {
    long cPtr = DynamicsJNI.btSolverBody_pushVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
