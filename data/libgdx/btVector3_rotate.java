public Vector3 rotate(Vector3 wAxis, float angle) {
    return LinearMathJNI.btVector3_rotate(swigCPtr, this, wAxis, angle);
}
