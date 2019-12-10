public void remove(btDbvtNode leaf) {
    CollisionJNI.btDbvt_remove(swigCPtr, this, btDbvtNode.getCPtr(leaf), leaf);
}
