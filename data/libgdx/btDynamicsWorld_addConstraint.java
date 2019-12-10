public void addConstraint(btTypedConstraint constraint) {
    DynamicsJNI.btDynamicsWorld_addConstraint__SWIG_1(swigCPtr, this, btTypedConstraint.getCPtr(constraint), constraint);
}
