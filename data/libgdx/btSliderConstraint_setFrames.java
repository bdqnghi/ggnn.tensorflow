public void setFrames(Matrix4 frameA, Matrix4 frameB) {
    DynamicsJNI.btSliderConstraint_setFrames(swigCPtr, this, frameA, frameB);
}
