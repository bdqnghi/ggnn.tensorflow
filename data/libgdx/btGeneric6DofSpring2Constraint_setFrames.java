public void setFrames(Matrix4 frameA, Matrix4 frameB) {
    DynamicsJNI.btGeneric6DofSpring2Constraint_setFrames(swigCPtr, this, frameA, frameB);
}
