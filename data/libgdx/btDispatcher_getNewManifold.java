public btPersistentManifold getNewManifold(btCollisionObject b0, btCollisionObject b1) {
    long cPtr = CollisionJNI.btDispatcher_getNewManifold(swigCPtr, this, btCollisionObject.getCPtr(b0), b0, btCollisionObject.getCPtr(b1), b1);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
