public static boolean isConcave(int proxyType) {
    return CollisionJNI.btBroadphaseProxy_isConcave(proxyType);
}
