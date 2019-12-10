public void setExtents(btVector3 value) {
    CollisionJNI.btConvexPolyhedron_extents_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
