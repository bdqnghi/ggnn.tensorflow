public static long SwigDirector_btBulletWorldImporter_createConeTwistConstraint__SWIG_0(btBulletWorldImporter jself, long rbA, long rbB, Matrix4 rbAFrame, Matrix4 rbBFrame) {
    return btConeTwistConstraint.getCPtr(jself.createConeTwistConstraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), rbAFrame, rbBFrame));
}
