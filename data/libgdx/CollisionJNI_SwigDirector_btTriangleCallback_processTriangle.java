public static void SwigDirector_btTriangleCallback_processTriangle(btTriangleCallback jself, long triangle, int partId, int triangleIndex) {
    jself.processTriangle((triangle == 0) ? null : new btVector3(triangle, false), partId, triangleIndex);
}
