public void swigTakeOwnership() {
    swigCMemOwn = true;
    CollisionJNI.ICollide_change_ownership(this, swigCPtr, true);
}
