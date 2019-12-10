public void warp(Vector3 origin) {
    DynamicsJNI.btCharacterControllerInterface_warp(swigCPtr, this, origin);
}
