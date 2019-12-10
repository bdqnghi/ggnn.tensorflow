public float distance(Vector3 v) {
    return LinearMathJNI.btVector3_distance(swigCPtr, this, v);
}
