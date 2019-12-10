public void removeConstraintRef(btTypedConstraint c) {
    DynamicsJNI.btRigidBody_removeConstraintRef(swigCPtr, this, btTypedConstraint.getCPtr(c), c);
}
