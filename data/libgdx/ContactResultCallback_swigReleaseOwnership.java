public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.ContactResultCallback_change_ownership(this, swigCPtr, false);
}
