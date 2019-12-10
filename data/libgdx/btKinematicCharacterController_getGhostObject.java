public btPairCachingGhostObject getGhostObject() {
    long cPtr = DynamicsJNI.btKinematicCharacterController_getGhostObject(swigCPtr, this);
    return (cPtr == 0) ? null : new btPairCachingGhostObject(cPtr, false);
}
