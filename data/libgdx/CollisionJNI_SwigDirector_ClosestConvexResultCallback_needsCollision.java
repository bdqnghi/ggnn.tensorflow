public static boolean SwigDirector_ClosestConvexResultCallback_needsCollision(ClosestConvexResultCallback jself, long proxy0) {
    return jself.needsCollision((proxy0 == 0) ? null : new btBroadphaseProxy(proxy0, false));
}
