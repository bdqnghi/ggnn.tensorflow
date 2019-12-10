public void setUsedVertices(btUsageBitfield value) {
    CollisionJNI.btSubSimplexClosestResult_usedVertices_set(swigCPtr, this, btUsageBitfield.getCPtr(value), value);
}
