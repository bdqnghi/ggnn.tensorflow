public SWIGTYPE_p_btAlignedObjectArrayT_btDbvtNode_const_p_t getRayTestStack() {
    long cPtr = CollisionJNI.btDbvt_rayTestStack_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btDbvtNode_const_p_t(cPtr, false);
}
