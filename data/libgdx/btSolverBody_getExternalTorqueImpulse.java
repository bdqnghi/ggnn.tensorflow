public btVector3 getExternalTorqueImpulse() {
    long cPtr = DynamicsJNI.btSolverBody_externalTorqueImpulse_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
