public void releaseManifold(btPersistentManifold manifold) {
    CollisionJNI.btDispatcher_releaseManifold(swigCPtr, this, btPersistentManifold.getCPtr(manifold), manifold);
}
