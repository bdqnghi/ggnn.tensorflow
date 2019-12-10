public boolean collide_triangle_exact(Vector3 p1, Vector3 p2, Vector3 p3, btVector4 triangle_plane) {
    return CollisionJNI.btAABB_collide_triangle_exact(swigCPtr, this, p1, p2, p3, btVector4.getCPtr(triangle_plane), triangle_plane);
}
