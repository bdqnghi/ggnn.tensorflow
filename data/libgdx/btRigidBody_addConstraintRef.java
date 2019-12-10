public void addConstraintRef(btTypedConstraint c) {
    DynamicsJNI.btRigidBody_addConstraintRef(swigCPtr, this, btTypedConstraint.getCPtr(c), c);
}
