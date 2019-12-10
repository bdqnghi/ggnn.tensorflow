public btVector3 getT1to0() {
    long cPtr = CollisionJNI.BT_BOX_BOX_TRANSFORM_CACHE_T1to0_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
