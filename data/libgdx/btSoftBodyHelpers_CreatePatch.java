public static btSoftBody CreatePatch(btSoftBodyWorldInfo worldInfo, Vector3 corner00, Vector3 corner10, Vector3 corner01, Vector3 corner11, int resx, int resy, int fixeds, boolean gendiags) {
    long cPtr = SoftbodyJNI.btSoftBodyHelpers_CreatePatch(btSoftBodyWorldInfo.getCPtr(worldInfo), worldInfo, corner00, corner10, corner01, corner11, resx, resy, fixeds, gendiags);
    return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
}
