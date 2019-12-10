public btCollisionObject getCollisionObject() {
    return btCollisionObject.getInstance(CollisionJNI.RayResultCallback_collisionObject_get(swigCPtr, this), false);
}
