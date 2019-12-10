public static void SwigDirector_ContactListener_onContactProcessed__SWIG_0(ContactListener jself, long cp, long colObj0, long colObj1) {
    jself.onContactProcessed(btManifoldPoint.obtainForArgument(cp, false), btCollisionObject.getInstance(colObj0, false), btCollisionObject.getInstance(colObj1, false));
}
