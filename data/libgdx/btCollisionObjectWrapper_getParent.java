public btCollisionObjectWrapper getParent() {
    return btCollisionObjectWrapper.internalTemp(CollisionJNI.btCollisionObjectWrapper_parent_get(swigCPtr, this), false);
}
