public static long SwigDirector_btBulletWorldImporter_createGeneric6DofConstraint__SWIG_1(btBulletWorldImporter jself, long rbB, Matrix4 frameInB, boolean useLinearReferenceFrameB) {
    return btGeneric6DofConstraint.getCPtr(jself.createGeneric6DofConstraint(new btRigidBody(rbB, false), frameInB, useLinearReferenceFrameB));
}
