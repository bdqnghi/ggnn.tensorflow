public btCompoundShapeChildData getChildShapePtr() {
    long cPtr = CollisionJNI.btCompoundShapeData_childShapePtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCompoundShapeChildData(cPtr, false);
}
