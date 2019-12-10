public void setAngularComponentA(btVector3 value) {
    DynamicsJNI.btSolverConstraint_angularComponentA_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
