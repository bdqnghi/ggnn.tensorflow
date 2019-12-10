public static long SwigDirector_btBulletWorldImporter_createGeneric6DofConstraint__SWIG_0(btBulletWorldImporter jself, long rbA, long rbB, Matrix4 frameInA, Matrix4 frameInB, boolean useLinearReferenceFrameA) {
    return btGeneric6DofConstraint.getCPtr(jself.createGeneric6DofConstraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), frameInA, frameInB, useLinearReferenceFrameA));
}
