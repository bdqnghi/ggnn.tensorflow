public btCollisionObject getCollisionObject() {
    return btCollisionObject.getInstance(CollisionJNI.LocalRayResult_collisionObject_get(swigCPtr, this), false);
}
