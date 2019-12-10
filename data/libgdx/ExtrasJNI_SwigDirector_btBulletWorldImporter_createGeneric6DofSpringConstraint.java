public static long SwigDirector_btBulletWorldImporter_createGeneric6DofSpringConstraint(btBulletWorldImporter jself, long rbA, long rbB, Matrix4 frameInA, Matrix4 frameInB, boolean useLinearReferenceFrameA) {
    return btGeneric6DofSpringConstraint.getCPtr(jself.createGeneric6DofSpringConstraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), frameInA, frameInB, useLinearReferenceFrameA));
}
