public void reportRayOverlappingNodex(btNodeOverlapCallback nodeCallback, Vector3 raySource, Vector3 rayTarget) {
    CollisionJNI.btQuantizedBvh_reportRayOverlappingNodex(swigCPtr, this, btNodeOverlapCallback.getCPtr(nodeCallback), nodeCallback, raySource, rayTarget);
}
