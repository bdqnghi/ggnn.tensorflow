public static float SwigDirector_ContactResultCallback_addSingleResult(ContactResultCallback jself, long cp, long colObj0Wrap, int partId0, int index0, long colObj1Wrap, int partId1, int index1) {
    return jself.addSingleResult(new btManifoldPoint(cp, false), btCollisionObjectWrapper.obtainForArgument(colObj0Wrap, false), partId0, index0, btCollisionObjectWrapper.obtainForArgument(colObj1Wrap, false), partId1, index1);
}
