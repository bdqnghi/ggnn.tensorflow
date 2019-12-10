public static void SwigDirector_ContactCache_onContactStarted(ContactCache jself, long manifold, boolean match0, boolean match1) {
    jself.onContactStarted((manifold == 0) ? null : new btPersistentManifold(manifold, false), match0, match1);
}
