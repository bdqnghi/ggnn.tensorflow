public void setDeltaAngularVelocity(btVector3 value) {
    DynamicsJNI.btSolverBody_deltaAngularVelocity_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
