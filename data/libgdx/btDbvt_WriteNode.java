public void WriteNode(btDbvtNode arg0, int index, int parent, int child0, int child1) {
    CollisionJNI.btDbvt_IWriter_WriteNode(swigCPtr, this, btDbvtNode.getCPtr(arg0), arg0, index, parent, child0, child1);
}
