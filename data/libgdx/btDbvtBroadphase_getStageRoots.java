public SWIGTYPE_p_p_btDbvtProxy getStageRoots() {
    long cPtr = CollisionJNI.btDbvtBroadphase_stageRoots_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_btDbvtProxy(cPtr, false);
}
