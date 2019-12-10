public SWIGTYPE_p_float getCfm() {
    long cPtr = DynamicsJNI.btTypedConstraint_btConstraintInfo2_cfm_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_float(cPtr, false);
}
