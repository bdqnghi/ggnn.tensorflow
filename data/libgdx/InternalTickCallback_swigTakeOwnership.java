public void swigTakeOwnership() {
    swigCMemOwn = true;
    DynamicsJNI.InternalTickCallback_change_ownership(this, swigCPtr, true);
}
