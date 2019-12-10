public void swigTakeOwnership() {
    swigCMemOwn = true;
    LinearMathJNI.btMotionState_change_ownership(this, swigCPtr, true);
}
