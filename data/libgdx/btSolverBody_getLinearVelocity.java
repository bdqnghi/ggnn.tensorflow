public btVector3 getLinearVelocity() {
    long cPtr = DynamicsJNI.btSolverBody_linearVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
