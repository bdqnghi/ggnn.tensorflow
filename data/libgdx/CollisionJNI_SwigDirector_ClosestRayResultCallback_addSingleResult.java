public static float SwigDirector_ClosestRayResultCallback_addSingleResult(ClosestRayResultCallback jself, long rayResult, boolean normalInWorldSpace) {
    return jself.addSingleResult(new LocalRayResult(rayResult, false), normalInWorldSpace);
}
