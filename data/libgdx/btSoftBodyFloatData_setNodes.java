public void setNodes(SoftBodyNodeData value) {
    SoftbodyJNI.btSoftBodyFloatData_nodes_set(swigCPtr, this, SoftBodyNodeData.getCPtr(value), value);
}
