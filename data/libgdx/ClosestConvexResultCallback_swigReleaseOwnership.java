public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.ClosestConvexResultCallback_change_ownership(this, swigCPtr, false);
}
