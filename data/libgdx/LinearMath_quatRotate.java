public static Vector3 quatRotate(Quaternion rotation, Vector3 v) {
    return LinearMathJNI.quatRotate(rotation, v);
}
