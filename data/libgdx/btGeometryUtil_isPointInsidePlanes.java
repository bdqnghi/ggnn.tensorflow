public static boolean isPointInsidePlanes(btVector3Array planeEquations, Vector3 point, float margin) {
    return LinearMathJNI.btGeometryUtil_isPointInsidePlanes(btVector3Array.getCPtr(planeEquations), planeEquations, point, margin);
}
