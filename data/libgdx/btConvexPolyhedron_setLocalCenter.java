public void setLocalCenter(btVector3 value) {
    CollisionJNI.btConvexPolyhedron_localCenter_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
