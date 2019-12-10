public btCollisionObject getHitCollisionObject() {
    return btCollisionObject.getInstance(CollisionJNI.ClosestConvexResultCallback_hitCollisionObject_get(swigCPtr, this), false);
}
