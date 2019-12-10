public void setInvMass(btVector3 value) {
    DynamicsJNI.btSolverBody_invMass_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
