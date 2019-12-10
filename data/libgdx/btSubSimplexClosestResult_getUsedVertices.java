public btUsageBitfield getUsedVertices() {
    long cPtr = CollisionJNI.btSubSimplexClosestResult_usedVertices_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btUsageBitfield(cPtr, false);
}
