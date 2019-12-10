public static boolean SwigDirector_ContactListener_onContactAdded__SWIG_4(ContactListener jself, long cp, long colObj0, int partId0, int index0, boolean match0, long colObj1, int partId1, int index1, boolean match1) {
    return jself.onContactAdded(btManifoldPoint.obtainForArgument(cp, false), btCollisionObject.getInstance(colObj0, false), partId0, index0, match0, btCollisionObject.getInstance(colObj1, false), partId1, index1, match1);
}
