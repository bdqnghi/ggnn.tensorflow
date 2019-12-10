public btCollisionObject getBody1Internal() {
    return btCollisionObject.getInstance(CollisionJNI.btManifoldResult_getBody1Internal(swigCPtr, this), false);
}
