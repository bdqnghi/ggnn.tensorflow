public btCollisionObject getCollisionObject() {
    return btCollisionObject.getInstance(CollisionJNI.btCollisionObjectWrapper_collisionObject_get(swigCPtr, this), false);
}
