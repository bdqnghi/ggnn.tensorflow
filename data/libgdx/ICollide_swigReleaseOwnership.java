public void swigReleaseOwnership() {
    swigCMemOwn = false;
    CollisionJNI.ICollide_change_ownership(this, swigCPtr, false);
}
