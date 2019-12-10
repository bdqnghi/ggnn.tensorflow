public void setAngularVelocity(btVector3 value) {
    DynamicsJNI.btSolverBody_angularVelocity_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
