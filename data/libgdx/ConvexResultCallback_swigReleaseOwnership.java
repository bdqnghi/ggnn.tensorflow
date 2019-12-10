public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.ConvexResultCallback_change_ownership(this, swigCPtr, false);
}
