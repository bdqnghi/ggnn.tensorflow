public static boolean SwigDirector_CustomCollisionDispatcher_needsCollision(CustomCollisionDispatcher jself, long body0, long body1) {
    return jself.needsCollision(btCollisionObject.getInstance(body0, false), btCollisionObject.getInstance(body1, false));
}
