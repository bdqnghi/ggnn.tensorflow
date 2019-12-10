public btPrimitiveManagerBase getPrimitiveManager() {
    long cPtr = CollisionJNI.btGImpactShapeInterface_getPrimitiveManager(swigCPtr, this);
    return (cPtr == 0) ? null : new btPrimitiveManagerBase(cPtr, false);
}
