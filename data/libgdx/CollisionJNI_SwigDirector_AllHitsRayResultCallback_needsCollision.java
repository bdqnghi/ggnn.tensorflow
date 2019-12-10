public static boolean SwigDirector_AllHitsRayResultCallback_needsCollision(AllHitsRayResultCallback jself, long proxy0) {
    return jself.needsCollision((proxy0 == 0) ? null : new btBroadphaseProxy(proxy0, false));
}
