public void swigReleaseOwnership() {
    swigCMemOwn = false;
    LinearMathJNI.btMotionState_change_ownership(this, swigCPtr, false);
}
