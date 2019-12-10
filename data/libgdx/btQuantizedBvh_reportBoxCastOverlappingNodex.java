public void reportBoxCastOverlappingNodex(btNodeOverlapCallback nodeCallback, Vector3 raySource, Vector3 rayTarget, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btQuantizedBvh_reportBoxCastOverlappingNodex(swigCPtr, this, btNodeOverlapCallback.getCPtr(nodeCallback), nodeCallback, raySource, rayTarget, aabbMin, aabbMax);
}
