public static boolean SwigDirector_btBroadphaseAabbCallback_process(btBroadphaseAabbCallback jself, long proxy) {
    return jself.process((proxy == 0) ? null : new btBroadphaseProxy(proxy, false));
}
