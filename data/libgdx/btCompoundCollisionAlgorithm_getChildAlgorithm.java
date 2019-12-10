public btCollisionAlgorithm getChildAlgorithm(int n) {
    long cPtr = CollisionJNI.btCompoundCollisionAlgorithm_getChildAlgorithm(swigCPtr, this, n);
    return (cPtr == 0) ? null : new btCollisionAlgorithm(cPtr, false);
}
