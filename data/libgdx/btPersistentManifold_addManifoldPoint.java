public int addManifoldPoint(btManifoldPoint newPoint) {
    return CollisionJNI.btPersistentManifold_addManifoldPoint__SWIG_1(swigCPtr, this, btManifoldPoint.getCPtr(newPoint), newPoint);
}
