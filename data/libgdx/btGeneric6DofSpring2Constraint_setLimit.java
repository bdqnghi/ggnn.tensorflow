public void setLimit(int axis, float lo, float hi) {
    DynamicsJNI.btGeneric6DofSpring2Constraint_setLimit(swigCPtr, this, axis, lo, hi);
}
