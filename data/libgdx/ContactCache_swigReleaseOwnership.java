public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.ContactCache_change_ownership(this, swigCPtr, false);
}
