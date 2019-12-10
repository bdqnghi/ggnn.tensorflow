public static void defaultNearCallback(btBroadphasePair collisionPair, btCollisionDispatcher dispatcher, btDispatcherInfo dispatchInfo) {
    CollisionJNI.btCollisionDispatcher_defaultNearCallback(collisionPair, btCollisionDispatcher.getCPtr(dispatcher), dispatcher, btDispatcherInfo.getCPtr(dispatchInfo), dispatchInfo);
}
