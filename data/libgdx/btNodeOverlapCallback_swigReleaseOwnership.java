public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btNodeOverlapCallback_change_ownership(this, swigCPtr, false);
}
