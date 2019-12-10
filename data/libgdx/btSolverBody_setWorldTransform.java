public void setWorldTransform(btTransform value) {
    DynamicsJNI.btSolverBody_worldTransform_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
