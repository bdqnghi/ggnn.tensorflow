public static boolean SwigDirector_CustomCollisionDispatcher_needsResponse(CustomCollisionDispatcher jself, long body0, long body1) {
    return jself.needsResponse(btCollisionObject.getInstance(body0, false), btCollisionObject.getInstance(body1, false));
}
