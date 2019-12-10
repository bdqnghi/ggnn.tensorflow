public void setContactNormal1(btVector3 value) {
    DynamicsJNI.btSolverConstraint_contactNormal1_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
