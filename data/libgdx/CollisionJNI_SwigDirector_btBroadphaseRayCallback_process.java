public static boolean SwigDirector_btBroadphaseRayCallback_process(btBroadphaseRayCallback jself, long proxy) {
    return jself.process((proxy == 0) ? null : new btBroadphaseProxy(proxy, false));
}
