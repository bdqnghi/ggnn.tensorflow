public void setAxis(Vector3 axis1, Vector3 axis2) {
    DynamicsJNI.btGeneric6DofConstraint_setAxis(swigCPtr, this, axis1, axis2);
}
