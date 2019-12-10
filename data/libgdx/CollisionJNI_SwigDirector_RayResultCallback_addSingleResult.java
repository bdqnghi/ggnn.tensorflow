public static float SwigDirector_RayResultCallback_addSingleResult(RayResultCallback jself, long rayResult, boolean normalInWorldSpace) {
    return jself.addSingleResult(new LocalRayResult(rayResult, false), normalInWorldSpace);
}
