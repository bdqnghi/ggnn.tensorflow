public void setFrames(Matrix4 frameA, Matrix4 frameB) {
    DynamicsJNI.btHingeConstraint_setFrames(swigCPtr, this, frameA, frameB);
}
