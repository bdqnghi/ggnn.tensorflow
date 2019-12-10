@Override
protected synchronized void delete() {
    if (swigCPtr != 0) {
        if (swigCMemOwn) {
            swigCMemOwn = false;
            ExtrasJNI.delete_btBulletWorldImporter(swigCPtr);
        }
        swigCPtr = 0;
    }
    super.delete();
}
