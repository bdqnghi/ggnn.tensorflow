public static long SwigDirector_btBulletWorldImporter_createHingeConstraint__SWIG_2(btBulletWorldImporter jself, long rbA, Matrix4 rbAFrame, boolean useReferenceFrameA) {
    return btHingeConstraint.getCPtr(jself.createHingeConstraint(new btRigidBody(rbA, false), rbAFrame, useReferenceFrameA));
}
