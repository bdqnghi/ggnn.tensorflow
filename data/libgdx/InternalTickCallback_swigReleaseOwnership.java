public void swigReleaseOwnership() {
    swigCMemOwn = false;
    DynamicsJNI.InternalTickCallback_change_ownership(this, swigCPtr, false);
}
