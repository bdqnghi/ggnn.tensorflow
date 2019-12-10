public void setLinearFactor(btVector3 value) {
    DynamicsJNI.btSolverBody_linearFactor_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
