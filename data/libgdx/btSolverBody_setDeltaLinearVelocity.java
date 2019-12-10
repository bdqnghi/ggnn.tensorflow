public void setDeltaLinearVelocity(btVector3 value) {
    DynamicsJNI.btSolverBody_deltaLinearVelocity_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
