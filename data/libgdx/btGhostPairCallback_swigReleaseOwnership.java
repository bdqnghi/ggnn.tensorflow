public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btGhostPairCallback_change_ownership(this, swigCPtr, false);
}
