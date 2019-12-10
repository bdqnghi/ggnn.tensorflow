public btVector3 getInvMass() {
    long cPtr = DynamicsJNI.btSolverBody_invMass_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
