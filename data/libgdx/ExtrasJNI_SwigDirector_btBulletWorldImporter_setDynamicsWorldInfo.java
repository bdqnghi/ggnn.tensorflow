public static void SwigDirector_btBulletWorldImporter_setDynamicsWorldInfo(btBulletWorldImporter jself, Vector3 gravity, long solverInfo) {
    jself.setDynamicsWorldInfo(gravity, new btContactSolverInfo(solverInfo, false));
}
