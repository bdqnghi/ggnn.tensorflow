public btCollisionObject getRigidBodyByIndex(int index) {
    return btCollisionObject.getInstance(ExtrasJNI.btWorldImporter_getRigidBodyByIndex(swigCPtr, this, index), false);
}
