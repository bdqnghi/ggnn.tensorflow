public void setLinearVelocity(btVector3 value) {
    DynamicsJNI.btSolverBody_linearVelocity_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
