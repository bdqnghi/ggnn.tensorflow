public SWIGTYPE_p_btAlignedObjectArrayT_unsigned_int_t getIndices() {
    long cPtr = LinearMathJNI.PHullResult_Indices_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_unsigned_int_t(cPtr, false);
}
