public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btInternalTriangleIndexCallback_change_ownership(this, swigCPtr, false);
}
