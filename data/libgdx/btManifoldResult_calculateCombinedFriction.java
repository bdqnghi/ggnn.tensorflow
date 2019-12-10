public static float calculateCombinedFriction(btCollisionObject body0, btCollisionObject body1) {
    return CollisionJNI.btManifoldResult_calculateCombinedFriction(btCollisionObject.getCPtr(body0), body0, btCollisionObject.getCPtr(body1), body1);
}
