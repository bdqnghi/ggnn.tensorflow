public static btSoftBody CreateFromConvexHull(btSoftBodyWorldInfo worldInfo, btVector3 vertices, int nvertices) {
    long cPtr = SoftbodyJNI.btSoftBodyHelpers_CreateFromConvexHull__SWIG_1(btSoftBodyWorldInfo.getCPtr(worldInfo), worldInfo, btVector3.getCPtr(vertices), vertices, nvertices);
    return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
}
