public btCollisionObject getMe() {
    return btCollisionObject.getInstance(CollisionJNI.ClosestNotMeConvexResultCallback_me_get(swigCPtr, this), false);
}
