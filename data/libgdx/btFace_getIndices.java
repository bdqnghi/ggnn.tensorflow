public SWIGTYPE_p_btAlignedObjectArrayT_int_t getIndices() {
    long cPtr = CollisionJNI.btFace_indices_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_int_t(cPtr, false);
}
