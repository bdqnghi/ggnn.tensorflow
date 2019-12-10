private void internalSetGdxBridge(GdxCollisionObjectBridge bridge) {
    CollisionJNI.btCollisionObject_internalSetGdxBridge(swigCPtr, this, GdxCollisionObjectBridge.getCPtr(bridge), bridge);
}
