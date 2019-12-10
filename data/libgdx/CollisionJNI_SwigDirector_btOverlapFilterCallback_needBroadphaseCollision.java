public static boolean SwigDirector_btOverlapFilterCallback_needBroadphaseCollision(btOverlapFilterCallback jself, long proxy0, long proxy1) {
    return jself.needBroadphaseCollision((proxy0 == 0) ? null : new btBroadphaseProxy(proxy0, false), (proxy1 == 0) ? null : new btBroadphaseProxy(proxy1, false));
}
