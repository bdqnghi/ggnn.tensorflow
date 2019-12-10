public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.btConvexTriangleCallback_change_ownership(this, swigCPtr, false);
}
