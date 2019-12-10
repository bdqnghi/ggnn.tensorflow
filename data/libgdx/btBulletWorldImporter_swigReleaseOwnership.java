public void swigReleaseOwnership() {
    swigCMemOwn = false;
    ExtrasJNI.btBulletWorldImporter_change_ownership(this, swigCPtr, false);
}
