public btTypedConstraint getConstraintRef(int index) {
    long cPtr = DynamicsJNI.btRigidBody_getConstraintRef(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btTypedConstraint(cPtr, false);
}
