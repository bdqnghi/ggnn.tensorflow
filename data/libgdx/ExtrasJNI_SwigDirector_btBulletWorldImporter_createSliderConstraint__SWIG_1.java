public static long SwigDirector_btBulletWorldImporter_createSliderConstraint__SWIG_1(btBulletWorldImporter jself, long rbB, Matrix4 frameInB, boolean useLinearReferenceFrameA) {
    return btSliderConstraint.getCPtr(jself.createSliderConstraint(new btRigidBody(rbB, false), frameInB, useLinearReferenceFrameA));
}
