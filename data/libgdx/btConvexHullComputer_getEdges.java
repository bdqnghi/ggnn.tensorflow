public SWIGTYPE_p_btAlignedObjectArrayT_btConvexHullComputer__Edge_t getEdges() {
    long cPtr = LinearMathJNI.btConvexHullComputer_edges_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btConvexHullComputer__Edge_t(cPtr, false);
}
