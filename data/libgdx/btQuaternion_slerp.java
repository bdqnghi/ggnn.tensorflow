public Quaternion slerp(Quaternion q, float t) {
    return LinearMathJNI.btQuaternion_slerp(swigCPtr, this, q, t);
}
