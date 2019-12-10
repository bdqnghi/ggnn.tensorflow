public static long SwigDirector_btBulletWorldImporter_createPoint2PointConstraint__SWIG_0(btBulletWorldImporter jself, long rbA, long rbB, Vector3 pivotInA, Vector3 pivotInB) {
    return btPoint2PointConstraint.getCPtr(jself.createPoint2PointConstraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), pivotInA, pivotInB));
}
