public static void getPlaneEquationsFromVertices(btVector3Array vertices, btVector3Array planeEquationsOut) {
    LinearMathJNI.btGeometryUtil_getPlaneEquationsFromVertices(btVector3Array.getCPtr(vertices), vertices, btVector3Array.getCPtr(planeEquationsOut), planeEquationsOut);
}
