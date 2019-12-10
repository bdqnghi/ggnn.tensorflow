public SWIGTYPE_p_float getConstraintError() {
    long cPtr = DynamicsJNI.btTypedConstraint_btConstraintInfo2_constraintError_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_float(cPtr, false);
}
