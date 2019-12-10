public void setStiffness(int index, float stiffness) {
    DynamicsJNI.btGeneric6DofSpringConstraint_setStiffness(swigCPtr, this, index, stiffness);
}
