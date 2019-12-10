public void setFrames(Matrix4 frameA, Matrix4 frameB) {
    DynamicsJNI.btConeTwistConstraint_setFrames(swigCPtr, this, frameA, frameB);
}
