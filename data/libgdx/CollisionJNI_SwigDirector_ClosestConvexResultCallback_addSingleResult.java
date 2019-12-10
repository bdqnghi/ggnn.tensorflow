public static float SwigDirector_ClosestConvexResultCallback_addSingleResult(ClosestConvexResultCallback jself, long convexResult, boolean normalInWorldSpace) {
    return jself.addSingleResult(new LocalConvexResult(convexResult, false), normalInWorldSpace);
}
