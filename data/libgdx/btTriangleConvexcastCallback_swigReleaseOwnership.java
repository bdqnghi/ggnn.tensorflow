public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btTriangleConvexcastCallback_change_ownership(this, swigCPtr, false);
}
