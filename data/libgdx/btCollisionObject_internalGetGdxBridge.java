private GdxCollisionObjectBridge internalGetGdxBridge() {
    long cPtr = CollisionJNI.btCollisionObject_internalGetGdxBridge(swigCPtr, this);
    return (cPtr == 0) ? null : new GdxCollisionObjectBridge(cPtr, false);
}
