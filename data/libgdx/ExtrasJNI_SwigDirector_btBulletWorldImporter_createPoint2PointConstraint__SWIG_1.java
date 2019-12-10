public static long SwigDirector_btBulletWorldImporter_createPoint2PointConstraint__SWIG_1(btBulletWorldImporter jself, long rbA, Vector3 pivotInA) {
    return btPoint2PointConstraint.getCPtr(jself.createPoint2PointConstraint(new btRigidBody(rbA, false), pivotInA));
}
