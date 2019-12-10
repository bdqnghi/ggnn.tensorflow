public boolean collide_plane(btVector4 plane) {
    return CollisionJNI.btAABB_collide_plane(swigCPtr, this, btVector4.getCPtr(plane), plane);
}
