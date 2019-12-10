public float dot(Vector3 v) {
    return LinearMathJNI.btVector3_dot(swigCPtr, this, v);
}
