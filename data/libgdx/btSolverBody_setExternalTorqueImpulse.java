public void setExternalTorqueImpulse(btVector3 value) {
    DynamicsJNI.btSolverBody_externalTorqueImpulse_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
