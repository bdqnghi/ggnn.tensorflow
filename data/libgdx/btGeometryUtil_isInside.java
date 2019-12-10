public static boolean isInside(btVector3Array vertices, Vector3 planeNormal, float margin) {
    return LinearMathJNI.btGeometryUtil_isInside(btVector3Array.getCPtr(vertices), vertices, planeNormal, margin);
}
