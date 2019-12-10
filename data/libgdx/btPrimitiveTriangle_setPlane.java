public void setPlane(btVector4 value) {
    CollisionJNI.btPrimitiveTriangle_plane_set(swigCPtr, this, btVector4.getCPtr(value), value);
}
