public btCollisionAlgorithm findAlgorithm(btCollisionObjectWrapper body0Wrap, btCollisionObjectWrapper body1Wrap) {
    long cPtr = CollisionJNI.btDispatcher_findAlgorithm__SWIG_1(swigCPtr, this, btCollisionObjectWrapper.getCPtr(body0Wrap), body0Wrap, btCollisionObjectWrapper.getCPtr(body1Wrap), body1Wrap);
    return (cPtr == 0) ? null : new btCollisionAlgorithm(cPtr, false);
}
