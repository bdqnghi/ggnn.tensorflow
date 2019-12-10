public void setExternalForceImpulse(btVector3 value) {
    DynamicsJNI.btSolverBody_externalForceImpulse_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
