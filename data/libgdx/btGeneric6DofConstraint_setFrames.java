public void setFrames(Matrix4 frameA, Matrix4 frameB) {
    DynamicsJNI.btGeneric6DofConstraint_setFrames(swigCPtr, this, frameA, frameB);
}
