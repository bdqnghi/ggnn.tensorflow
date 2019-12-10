public static float SwigDirector_ConvexResultCallback_addSingleResult(ConvexResultCallback jself, long convexResult, boolean normalInWorldSpace) {
    return jself.addSingleResult(new LocalConvexResult(convexResult, false), normalInWorldSpace);
}
