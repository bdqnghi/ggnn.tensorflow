public float getAngle(int axis_index) {
    return DynamicsJNI.btGeneric6DofConstraint_getAngle(swigCPtr, this, axis_index);
}
