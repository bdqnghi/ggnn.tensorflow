public btVector3 getDeltaAngularVelocity() {
    long cPtr = DynamicsJNI.btSolverBody_deltaAngularVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
