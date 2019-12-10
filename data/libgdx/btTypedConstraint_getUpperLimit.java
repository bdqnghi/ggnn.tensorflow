public SWIGTYPE_p_float getUpperLimit() {
    long cPtr = DynamicsJNI.btTypedConstraint_btConstraintInfo2_upperLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_float(cPtr, false);
}
