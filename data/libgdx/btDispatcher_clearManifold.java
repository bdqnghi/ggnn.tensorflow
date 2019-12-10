public void clearManifold(btPersistentManifold manifold) {
    CollisionJNI.btDispatcher_clearManifold(swigCPtr, this, btPersistentManifold.getCPtr(manifold), manifold);
}
