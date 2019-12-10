public btBroadphaseProxy createProxy(Vector3 aabbMin, Vector3 aabbMax, int shapeType, long userPtr, short collisionFilterGroup, short collisionFilterMask, btDispatcher dispatcher, long multiSapProxy) {
    return btBroadphaseProxy.internalTemp(CollisionJNI.btBroadphaseInterface_createProxy(swigCPtr, this, aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, btDispatcher.getCPtr(dispatcher), dispatcher, multiSapProxy), false);
}
