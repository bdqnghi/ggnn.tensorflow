public static void SwigDirector_ContactListener_onContactEnded__SWIG_0(ContactListener jself, long manifold) {
    jself.onContactEnded((manifold == 0) ? null : new btPersistentManifold(manifold, false));
}
