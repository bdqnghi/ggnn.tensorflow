public static float SwigDirector_AllHitsRayResultCallback_addSingleResult(AllHitsRayResultCallback jself, long rayResult, boolean normalInWorldSpace) {
    return jself.addSingleResult(new LocalRayResult(rayResult, false), normalInWorldSpace);
}
