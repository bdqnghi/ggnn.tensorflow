public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btOverlappingPairCallback_change_ownership(this, swigCPtr, false);
}
