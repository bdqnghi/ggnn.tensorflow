public static long SwigDirector_btBulletWorldImporter_createGearConstraint(btBulletWorldImporter jself, long rbA, long rbB, Vector3 axisInA, Vector3 axisInB, float ratio) {
    return SWIGTYPE_p_btGearConstraint.getCPtr(jself.createGearConstraint(new btRigidBody(rbA, false), new btRigidBody(rbB, false), axisInA, axisInB, ratio));
}
