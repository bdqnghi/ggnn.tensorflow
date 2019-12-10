public btVector4 getPlane() {
    long cPtr = CollisionJNI.btPrimitiveTriangle_plane_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector4(cPtr, false);
}
