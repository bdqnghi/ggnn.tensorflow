public void reportAabbOverlappingNodex(btNodeOverlapCallback nodeCallback, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btQuantizedBvh_reportAabbOverlappingNodex(swigCPtr, this, btNodeOverlapCallback.getCPtr(nodeCallback), nodeCallback, aabbMin, aabbMax);
}
