public static boolean TestTriangleAgainstAabb2(btVector3 vertices, Vector3 aabbMin, Vector3 aabbMax) {
    return LinearMathJNI.TestTriangleAgainstAabb2(btVector3.getCPtr(vertices), vertices, aabbMin, aabbMax);
}
