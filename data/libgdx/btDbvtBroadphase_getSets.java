public btDbvt getSets() {
    long cPtr = CollisionJNI.btDbvtBroadphase_sets_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvt(cPtr, false);
}
