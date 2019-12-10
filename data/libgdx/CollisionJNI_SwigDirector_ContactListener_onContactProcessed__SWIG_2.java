public static void SwigDirector_ContactListener_onContactProcessed__SWIG_2(ContactListener jself, long cp, long colObj0, boolean match0, long colObj1, boolean match1) {
    jself.onContactProcessed(btManifoldPoint.obtainForArgument(cp, false), btCollisionObject.getInstance(colObj0, false), match0, btCollisionObject.getInstance(colObj1, false), match1);
}
