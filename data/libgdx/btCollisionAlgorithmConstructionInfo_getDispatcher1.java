public btDispatcher getDispatcher1() {
    long cPtr = CollisionJNI.btCollisionAlgorithmConstructionInfo_dispatcher1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDispatcher(cPtr, false);
}
