public void swigTakeOwnership() {
    swigCMemOwn = true;
    LinearMathJNI.btIDebugDraw_change_ownership(this, swigCPtr, true);
}
