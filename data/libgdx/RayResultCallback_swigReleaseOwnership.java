public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.RayResultCallback_change_ownership(this, swigCPtr, false);
}
