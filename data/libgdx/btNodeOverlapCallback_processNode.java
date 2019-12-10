public void processNode(int subPart, int triangleIndex) {
    CollisionJNI.btNodeOverlapCallback_processNode(swigCPtr, this, subPart, triangleIndex);
}
