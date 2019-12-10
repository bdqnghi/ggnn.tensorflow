public void Prepare(btDbvtNode root, int numnodes) {
    CollisionJNI.btDbvt_IWriter_Prepare(swigCPtr, this, btDbvtNode.getCPtr(root), root, numnodes);
}
