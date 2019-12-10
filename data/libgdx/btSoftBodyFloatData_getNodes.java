public SoftBodyNodeData getNodes() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_nodes_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftBodyNodeData(cPtr, false);
}
