private btCollisionObjectWrapper getWrapper() {
    return btCollisionObjectWrapper.internalTemp(CollisionJNI.CollisionObjectWrapper_getWrapper(swigCPtr, this), false);
}
