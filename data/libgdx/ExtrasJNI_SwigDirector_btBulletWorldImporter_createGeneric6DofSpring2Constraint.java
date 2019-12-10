public static long SwigDirector_btBulletWorldImporter_createGeneric6DofSpring2Constraint(btBulletWorldImporter jself, long rbA, long rbB, Matrix4 frameInA, Matrix4 frameInB, int rotateOrder) {
    return btGeneric6DofSpring2Constraint.getCPtr(jself.createGeneric6DofSpring2Constraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), frameInA, frameInB, rotateOrder));
}
