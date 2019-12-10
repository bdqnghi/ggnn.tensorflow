public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btOverlapCallback_change_ownership(this, swigCPtr, false);
}
