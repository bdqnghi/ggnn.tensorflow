public void replaceContactPoint(btManifoldPoint newPoint, int insertIndex) {
    CollisionJNI.btPersistentManifold_replaceContactPoint(swigCPtr, this, btManifoldPoint.getCPtr(newPoint), newPoint, insertIndex);
}
