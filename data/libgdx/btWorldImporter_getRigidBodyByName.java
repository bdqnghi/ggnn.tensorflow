public btRigidBody getRigidBodyByName(String name) {
    return btRigidBody.getInstance(ExtrasJNI.btWorldImporter_getRigidBodyByName(swigCPtr, this, name), false);
}
