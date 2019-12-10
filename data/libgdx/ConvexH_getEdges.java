public SWIGTYPE_p_btAlignedObjectArrayT_ConvexH__HalfEdge_t getEdges() {
    long cPtr = LinearMathJNI.ConvexH_edges_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_ConvexH__HalfEdge_t(cPtr, false);
}
