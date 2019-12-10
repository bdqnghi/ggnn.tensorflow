public Vector3 lerp(Vector3 v, float t) {
    return LinearMathJNI.btVector3_lerp(swigCPtr, this, v, t);
}
