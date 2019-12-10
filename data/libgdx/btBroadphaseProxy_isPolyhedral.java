public static boolean isPolyhedral(int proxyType) {
    return CollisionJNI.btBroadphaseProxy_isPolyhedral(proxyType);
}
