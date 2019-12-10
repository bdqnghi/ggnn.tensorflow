public void setAabbFromQuantizeNode(btQuantizedBvhNode quantizedNode) {
    CollisionJNI.btBvhSubtreeInfo_setAabbFromQuantizeNode(swigCPtr, this, btQuantizedBvhNode.getCPtr(quantizedNode), quantizedNode);
}
