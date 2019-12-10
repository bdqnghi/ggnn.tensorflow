public SWIGTYPE_p_float getLowerLimit() {
    long cPtr = DynamicsJNI.btTypedConstraint_btConstraintInfo2_lowerLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_float(cPtr, false);
}
