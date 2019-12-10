public void setLimit(int axis, float lo, float hi) {
    DynamicsJNI.btGeneric6DofConstraint_setLimit(swigCPtr, this, axis, lo, hi);
}
