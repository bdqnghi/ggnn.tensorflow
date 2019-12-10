public btVector3 getScale() {
    long cPtr = CollisionJNI.btGImpactMeshShapePart_TrimeshPrimitiveManager_scale_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
