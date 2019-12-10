public void clearUserCache(btManifoldPoint pt) {
    CollisionJNI.btPersistentManifold_clearUserCache(swigCPtr, this, btManifoldPoint.getCPtr(pt), pt);
}
