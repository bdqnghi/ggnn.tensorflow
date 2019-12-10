public SWIGTYPE_p_btAlignedObjectArrayT_int_t getVertexIndexMapping() {
    long cPtr = LinearMathJNI.HullLibrary_vertexIndexMapping_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_int_t(cPtr, false);
}
