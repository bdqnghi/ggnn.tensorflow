public btGImpactCompoundShape.CompoundPrimitiveManager getCompoundPrimitiveManager() {
    long cPtr = CollisionJNI.btGImpactCompoundShape_getCompoundPrimitiveManager(swigCPtr, this);
    return (cPtr == 0) ? null : new btGImpactCompoundShape.CompoundPrimitiveManager(cPtr, false);
}
