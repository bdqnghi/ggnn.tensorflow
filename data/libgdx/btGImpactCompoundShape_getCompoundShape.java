public btGImpactCompoundShape getCompoundShape() {
    long cPtr = CollisionJNI.btGImpactCompoundShape_CompoundPrimitiveManager_compoundShape_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btGImpactCompoundShape(cPtr, false);
}
