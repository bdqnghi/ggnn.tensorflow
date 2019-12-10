public SWIGTYPE_p_btAlignedObjectArrayT_btPlane_t getFacets() {
    long cPtr = LinearMathJNI.ConvexH_facets_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btPlane_t(cPtr, false);
}
