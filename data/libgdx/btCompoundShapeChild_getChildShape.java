public btCollisionShape getChildShape() {
    long cPtr = CollisionJNI.btCompoundShapeChild_childShape_get(swigCPtr, this);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
