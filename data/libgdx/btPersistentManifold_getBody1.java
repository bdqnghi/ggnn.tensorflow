public btCollisionObject getBody1() {
    return btCollisionObject.getInstance(CollisionJNI.btPersistentManifold_getBody1(swigCPtr, this), false);
}
