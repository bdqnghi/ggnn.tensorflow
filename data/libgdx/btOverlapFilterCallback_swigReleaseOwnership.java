public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btOverlapFilterCallback_change_ownership(this, swigCPtr, false);
}
