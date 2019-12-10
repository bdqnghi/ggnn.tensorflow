public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.AllHitsRayResultCallback_change_ownership(this, swigCPtr, false);
}
