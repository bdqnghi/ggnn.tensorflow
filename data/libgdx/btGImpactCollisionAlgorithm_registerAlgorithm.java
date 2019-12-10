public static void registerAlgorithm(btCollisionDispatcher dispatcher) {
    CollisionJNI.btGImpactCollisionAlgorithm_registerAlgorithm(btCollisionDispatcher.getCPtr(dispatcher), dispatcher);
}
