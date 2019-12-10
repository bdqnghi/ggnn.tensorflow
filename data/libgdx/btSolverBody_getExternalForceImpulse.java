public btVector3 getExternalForceImpulse() {
    long cPtr = DynamicsJNI.btSolverBody_externalForceImpulse_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
