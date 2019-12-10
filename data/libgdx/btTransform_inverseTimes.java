public Matrix4 inverseTimes(Matrix4 t) {
    return LinearMathJNI.btTransform_inverseTimes(swigCPtr, this, t);
}
