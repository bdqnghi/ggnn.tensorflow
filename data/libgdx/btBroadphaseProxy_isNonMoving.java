public static boolean isNonMoving(int proxyType) {
    return CollisionJNI.btBroadphaseProxy_isNonMoving(proxyType);
}
