public boolean validContactDistance(btManifoldPoint pt) {
    return CollisionJNI.btPersistentManifold_validContactDistance(swigCPtr, this, btManifoldPoint.getCPtr(pt), pt);
}
