public void removeConstraint(btTypedConstraint constraint) {
    DynamicsJNI.btDynamicsWorld_removeConstraint(swigCPtr, this, btTypedConstraint.getCPtr(constraint), constraint);
}
