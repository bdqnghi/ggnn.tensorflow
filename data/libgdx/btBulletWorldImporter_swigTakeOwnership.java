public void swigTakeOwnership() {
    swigCMemOwn = true;
    ExtrasJNI.btBulletWorldImporter_change_ownership(this, swigCPtr, true);
}
