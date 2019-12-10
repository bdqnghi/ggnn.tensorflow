public void swigReleaseOwnership() {
    swigCMemOwn = false;
    LinearMathJNI.btIDebugDraw_change_ownership(this, swigCPtr, false);
}
