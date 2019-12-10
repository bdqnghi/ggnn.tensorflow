public btDbvt getSet(int index) {
    long cPtr = CollisionJNI.btDbvtBroadphase_getSet(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btDbvt(cPtr, false);
}
