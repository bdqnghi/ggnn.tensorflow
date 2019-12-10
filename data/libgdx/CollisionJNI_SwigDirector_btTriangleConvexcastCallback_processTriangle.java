public static void SwigDirector_btTriangleConvexcastCallback_processTriangle(btTriangleConvexcastCallback jself, long triangle, int partId, int triangleIndex) {
    jself.processTriangle((triangle == 0) ? null : new btVector3(triangle, false), partId, triangleIndex);
}
