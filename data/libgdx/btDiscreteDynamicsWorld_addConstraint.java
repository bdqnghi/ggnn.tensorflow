public void addConstraint(btTypedConstraint constraint) {
    DynamicsJNI.btDiscreteDynamicsWorld_addConstraint__SWIG_1(swigCPtr, this, btTypedConstraint.getCPtr(constraint), constraint);
}
