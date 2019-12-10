public void WriteLeaf(btDbvtNode arg0, int index, int parent) {
    CollisionJNI.btDbvt_IWriter_WriteLeaf(swigCPtr, this, btDbvtNode.getCPtr(arg0), arg0, index, parent);
}
