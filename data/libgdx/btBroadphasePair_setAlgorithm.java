public void setAlgorithm(btCollisionAlgorithm value) {
    CollisionJNI.btBroadphasePair_algorithm_set(swigCPtr, this, btCollisionAlgorithm.getCPtr(value), value);
}
