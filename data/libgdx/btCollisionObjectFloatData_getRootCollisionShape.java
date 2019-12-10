public btCollisionShapeData getRootCollisionShape() {
    long cPtr = CollisionJNI.btCollisionObjectFloatData_rootCollisionShape_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionShapeData(cPtr, false);
}
