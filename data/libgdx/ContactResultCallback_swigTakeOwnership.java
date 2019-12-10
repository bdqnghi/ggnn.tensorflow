public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.ContactResultCallback_change_ownership(this, swigCPtr, true);
}
