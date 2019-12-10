public void calculateTransforms(Matrix4 transA, Matrix4 transB) {
    DynamicsJNI.btSliderConstraint_calculateTransforms(swigCPtr, this, transA, transB);
}
