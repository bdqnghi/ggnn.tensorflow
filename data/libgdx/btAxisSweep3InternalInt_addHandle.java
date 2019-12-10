public long addHandle(Vector3 aabbMin, Vector3 aabbMax, long pOwner, short collisionFilterGroup, short collisionFilterMask, btDispatcher dispatcher, long multiSapProxy) {
    return CollisionJNI.btAxisSweep3InternalInt_addHandle(swigCPtr, this, aabbMin, aabbMax, pOwner, collisionFilterGroup, collisionFilterMask, btDispatcher.getCPtr(dispatcher), dispatcher, multiSapProxy);
}
