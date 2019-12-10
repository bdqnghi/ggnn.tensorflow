public btCompoundShapeChild getChildList() {
    long cPtr = CollisionJNI.btCompoundShape_getChildList(swigCPtr, this);
    return (cPtr == 0) ? null : new btCompoundShapeChild(cPtr, false);
}
