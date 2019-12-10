public static boolean TestPointAgainstAabb2(Vector3 aabbMin1, Vector3 aabbMax1, Vector3 point) {
    return LinearMathJNI.TestPointAgainstAabb2(aabbMin1, aabbMax1, point);
}
