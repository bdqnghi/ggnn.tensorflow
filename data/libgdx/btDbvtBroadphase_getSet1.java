public btDbvt getSet1() {
    long cPtr = CollisionJNI.btDbvtBroadphase_getSet1(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvt(cPtr, false);
}
