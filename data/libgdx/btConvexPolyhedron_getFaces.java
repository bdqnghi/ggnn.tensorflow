public SWIGTYPE_p_btAlignedObjectArrayT_btFace_t getFaces() {
    long cPtr = CollisionJNI.btConvexPolyhedron_faces_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btFace_t(cPtr, false);
}
