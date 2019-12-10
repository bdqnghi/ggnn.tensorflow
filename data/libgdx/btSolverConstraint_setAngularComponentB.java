public void setAngularComponentB(btVector3 value) {
    DynamicsJNI.btSolverConstraint_angularComponentB_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
