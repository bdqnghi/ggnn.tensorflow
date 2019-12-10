public btGImpactMeshShapePart.TrimeshPrimitiveManager getTrimeshPrimitiveManager() {
    long cPtr = CollisionJNI.btGImpactMeshShapePart_getTrimeshPrimitiveManager(swigCPtr, this);
    return (cPtr == 0) ? null : new btGImpactMeshShapePart.TrimeshPrimitiveManager(cPtr, false);
}
