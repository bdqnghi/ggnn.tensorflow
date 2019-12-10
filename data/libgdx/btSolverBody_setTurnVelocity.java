public void setTurnVelocity(btVector3 value) {
    DynamicsJNI.btSolverBody_turnVelocity_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
