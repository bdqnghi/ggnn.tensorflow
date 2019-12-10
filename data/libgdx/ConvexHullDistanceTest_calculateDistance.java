public void calculateDistance(btCollisionObject colObjA, btCollisionObject colObjB) {
    DistanceInternalResultCallback result = new DistanceInternalResultCallback();
    Collision.setGContactBreakingThreshold(100f);
    collisionWorld.contactPairTest(colObjA, colObjB, result);
    Collision.setGContactBreakingThreshold(0.02f);
}
