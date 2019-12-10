public static boolean isConvex2d(int proxyType) {
    return CollisionJNI.btBroadphaseProxy_isConvex2d(proxyType);
}
