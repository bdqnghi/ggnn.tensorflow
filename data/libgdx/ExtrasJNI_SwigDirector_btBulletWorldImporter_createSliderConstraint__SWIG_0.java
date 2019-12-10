public static long SwigDirector_btBulletWorldImporter_createSliderConstraint__SWIG_0(btBulletWorldImporter jself, long rbA, long rbB, Matrix4 frameInA, Matrix4 frameInB, boolean useLinearReferenceFrameA) {
    return btSliderConstraint.getCPtr(jself.createSliderConstraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), frameInA, frameInB, useLinearReferenceFrameA));
}
