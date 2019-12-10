public static long SwigDirector_btBulletWorldImporter_createHingeConstraint__SWIG_0(btBulletWorldImporter jself, long rbA, long rbB, Matrix4 rbAFrame, Matrix4 rbBFrame, boolean useReferenceFrameA) {
    return btHingeConstraint.getCPtr(jself.createHingeConstraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), rbAFrame, rbBFrame, useReferenceFrameA));
}
