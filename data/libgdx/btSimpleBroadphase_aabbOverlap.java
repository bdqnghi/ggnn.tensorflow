public static boolean aabbOverlap(btSimpleBroadphaseProxy proxy0, btSimpleBroadphaseProxy proxy1) {
    return CollisionJNI.btSimpleBroadphase_aabbOverlap(btSimpleBroadphaseProxy.getCPtr(proxy0), proxy0, btSimpleBroadphaseProxy.getCPtr(proxy1), proxy1);
}
