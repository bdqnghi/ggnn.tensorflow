public boolean collide_ray(Vector3 vorigin, Vector3 vdir) {
    return CollisionJNI.btAABB_collide_ray(swigCPtr, this, vorigin, vdir);
}
