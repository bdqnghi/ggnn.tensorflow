public static long SwigDirector_btBulletWorldImporter_createConeTwistConstraint__SWIG_1(btBulletWorldImporter jself, long rbA, Matrix4 rbAFrame) {
    return btConeTwistConstraint.getCPtr(jself.createConeTwistConstraint(new btRigidBody(rbA, false), rbAFrame));
}
