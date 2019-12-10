public btCollisionAlgorithm getAlgorithm() {
    long cPtr = CollisionJNI.btBroadphasePair_algorithm_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionAlgorithm(cPtr, false);
}
