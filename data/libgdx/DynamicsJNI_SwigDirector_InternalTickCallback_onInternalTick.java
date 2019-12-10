public static void SwigDirector_InternalTickCallback_onInternalTick(InternalTickCallback jself, long dynamicsWorld, float timeStep) {
    jself.onInternalTick((dynamicsWorld == 0) ? null : new btDynamicsWorld(dynamicsWorld, false), timeStep);
}
