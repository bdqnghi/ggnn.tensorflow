public btCollisionObject getHitCollisionObject() {
    return btCollisionObject.getInstance(CollisionJNI.LocalConvexResult_hitCollisionObject_get(swigCPtr, this), false);
}
