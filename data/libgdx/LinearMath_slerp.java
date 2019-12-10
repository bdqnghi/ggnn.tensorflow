public static Quaternion slerp(Quaternion q1, Quaternion q2, float t) {
    return LinearMathJNI.slerp(q1, q2, t);
}
