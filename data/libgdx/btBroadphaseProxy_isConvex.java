public static boolean isConvex(int proxyType) {
    return CollisionJNI.btBroadphaseProxy_isConvex(proxyType);
}
