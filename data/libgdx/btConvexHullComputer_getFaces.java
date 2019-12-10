public SWIGTYPE_p_btAlignedObjectArrayT_int_t getFaces() {
    long cPtr = LinearMathJNI.btConvexHullComputer_faces_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_int_t(cPtr, false);
}
