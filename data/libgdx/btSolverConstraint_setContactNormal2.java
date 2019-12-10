public void setContactNormal2(btVector3 value) {
    DynamicsJNI.btSolverConstraint_contactNormal2_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
