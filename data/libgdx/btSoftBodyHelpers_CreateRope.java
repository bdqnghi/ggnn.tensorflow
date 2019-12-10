public static btSoftBody CreateRope(btSoftBodyWorldInfo worldInfo, Vector3 from, Vector3 to, int res, int fixeds) {
    long cPtr = SoftbodyJNI.btSoftBodyHelpers_CreateRope(btSoftBodyWorldInfo.getCPtr(worldInfo), worldInfo, from, to, res, fixeds);
    return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
}
