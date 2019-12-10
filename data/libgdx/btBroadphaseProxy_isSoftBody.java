public static boolean isSoftBody(int proxyType) {
    return CollisionJNI.btBroadphaseProxy_isSoftBody(proxyType);
}
