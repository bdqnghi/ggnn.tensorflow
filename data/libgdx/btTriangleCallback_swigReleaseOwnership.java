public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btTriangleCallback_change_ownership(this, swigCPtr, false);
}
