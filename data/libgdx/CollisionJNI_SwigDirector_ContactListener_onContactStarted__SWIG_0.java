public static void SwigDirector_ContactListener_onContactStarted__SWIG_0(ContactListener jself, long manifold) {
    jself.onContactStarted((manifold == 0) ? null : new btPersistentManifold(manifold, false));
}
