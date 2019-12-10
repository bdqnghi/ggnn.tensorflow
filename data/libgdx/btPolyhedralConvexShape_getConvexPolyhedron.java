public btConvexPolyhedron getConvexPolyhedron() {
    long cPtr = CollisionJNI.btPolyhedralConvexShape_getConvexPolyhedron(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexPolyhedron(cPtr, false);
}
