public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Tetra_t getTetras() {
    long cPtr = SoftbodyJNI.btSoftBody_tetras_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Tetra_t(cPtr, false);
}
