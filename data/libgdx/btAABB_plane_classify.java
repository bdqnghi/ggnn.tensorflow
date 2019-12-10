public int plane_classify(btVector4 plane) {
    return CollisionJNI.btAABB_plane_classify(swigCPtr, this, btVector4.getCPtr(plane), plane);
}
