public static btSoftBody CreateEllipsoid(btSoftBodyWorldInfo worldInfo, Vector3 center, Vector3 radius, int res) {
    long cPtr = SoftbodyJNI.btSoftBodyHelpers_CreateEllipsoid(btSoftBodyWorldInfo.getCPtr(worldInfo), worldInfo, center, radius, res);
    return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
}
