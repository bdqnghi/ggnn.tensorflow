public Quaternion nearest(Quaternion qd) {
    return LinearMathJNI.btQuaternion_nearest(swigCPtr, this, qd);
}
