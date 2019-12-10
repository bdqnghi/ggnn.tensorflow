public static long SwigDirector_btBulletWorldImporter_createHingeConstraint__SWIG_3(btBulletWorldImporter jself, long rbA, Matrix4 rbAFrame) {
    return btHingeConstraint.getCPtr(jself.createHingeConstraint(new btRigidBody(rbA, false), rbAFrame));
}
