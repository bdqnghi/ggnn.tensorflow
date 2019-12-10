public Vector3 getAxis(int axis_index) {
    return DynamicsJNI.btGeneric6DofConstraint_getAxis(swigCPtr, this, axis_index);
}
