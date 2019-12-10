public boolean isInside(Vector3 pt, float tolerance) {
    return CollisionJNI.btPolyhedralConvexShape_isInside(swigCPtr, this, pt, tolerance);
}
