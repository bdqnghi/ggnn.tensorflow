public static void SwigDirector_btInternalTriangleIndexCallback_internalProcessTriangleIndex(btInternalTriangleIndexCallback jself, long triangle, int partId, int triangleIndex) {
    jself.internalProcessTriangleIndex((triangle == 0) ? null : new btVector3(triangle, false), partId, triangleIndex);
}
