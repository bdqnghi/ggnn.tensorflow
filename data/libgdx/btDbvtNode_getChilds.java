public SWIGTYPE_p_p_btDbvtNode getChilds() {
    long cPtr = CollisionJNI.btDbvtNode_childs_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_btDbvtNode(cPtr, false);
}
