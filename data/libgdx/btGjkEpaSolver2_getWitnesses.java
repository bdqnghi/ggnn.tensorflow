public btVector3 getWitnesses() {
    long cPtr = CollisionJNI.btGjkEpaSolver2_sResults_witnesses_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
