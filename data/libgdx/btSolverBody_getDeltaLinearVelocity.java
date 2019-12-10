public btVector3 getDeltaLinearVelocity() {
    long cPtr = DynamicsJNI.btSolverBody_deltaLinearVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
