public static void getVerticesFromPlaneEquations(btVector3Array planeEquations, btVector3Array verticesOut) {
    LinearMathJNI.btGeometryUtil_getVerticesFromPlaneEquations(btVector3Array.getCPtr(planeEquations), planeEquations, btVector3Array.getCPtr(verticesOut), verticesOut);
}
