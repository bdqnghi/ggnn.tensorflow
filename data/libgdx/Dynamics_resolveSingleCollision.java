public static float resolveSingleCollision(btRigidBody body1, btCollisionObject colObj2, Vector3 contactPositionWorld, Vector3 contactNormalOnB, btContactSolverInfo solverInfo, float distance) {
    return DynamicsJNI.resolveSingleCollision(btRigidBody.getCPtr(body1), body1, btCollisionObject.getCPtr(colObj2), colObj2, contactPositionWorld, contactNormalOnB, btContactSolverInfo.getCPtr(solverInfo), solverInfo, distance);
}
