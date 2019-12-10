public int getCacheEntry(btManifoldPoint newPoint) {
    return CollisionJNI.btPersistentManifold_getCacheEntry(swigCPtr, this, btManifoldPoint.getCPtr(newPoint), newPoint);
}
