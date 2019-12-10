public static void detach(btDynamicsWorld dynamicsWorld, boolean isPreTick) {
    DynamicsJNI.InternalTickCallback_detach__SWIG_1(btDynamicsWorld.getCPtr(dynamicsWorld), dynamicsWorld, isPreTick);
}
