public static boolean areVerticesBehindPlane(Vector3 planeNormal, btVector3Array vertices, float margin) {
    return LinearMathJNI.btGeometryUtil_areVerticesBehindPlane(planeNormal, btVector3Array.getCPtr(vertices), vertices, margin);
}
