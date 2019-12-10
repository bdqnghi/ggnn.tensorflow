public void setAngularFactor(btVector3 value) {
    DynamicsJNI.btSolverBody_angularFactor_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
