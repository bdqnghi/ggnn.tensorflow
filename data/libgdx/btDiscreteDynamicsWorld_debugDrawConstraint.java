public void debugDrawConstraint(btTypedConstraint constraint) {
    DynamicsJNI.btDiscreteDynamicsWorld_debugDrawConstraint(swigCPtr, this, btTypedConstraint.getCPtr(constraint), constraint);
}
