public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.ContactCache_change_ownership(this, swigCPtr, true);
}
