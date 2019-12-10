public float dot(Quaternion q) {
    return LinearMathJNI.btQuaternion_dot(swigCPtr, this, q);
}
