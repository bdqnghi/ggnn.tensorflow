public btDbvtAabbMm getVolume() {
    long cPtr = CollisionJNI.btDbvtNode_volume_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtAabbMm(cPtr, false);
}
