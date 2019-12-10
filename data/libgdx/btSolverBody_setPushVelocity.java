public void setPushVelocity(btVector3 value) {
    DynamicsJNI.btSolverBody_pushVelocity_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
