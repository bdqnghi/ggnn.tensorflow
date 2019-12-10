public void setOriginalBody(btRigidBody value) {
    DynamicsJNI.btSolverBody_originalBody_set(swigCPtr, this, btRigidBody.getCPtr(value), value);
}
