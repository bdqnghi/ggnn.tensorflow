public static void InternalTickCallback_CB(btDynamicsWorld world, float timeStep) {
    DynamicsJNI.InternalTickCallback_CB(btDynamicsWorld.getCPtr(world), world, timeStep);
}
