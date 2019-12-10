public btCollisionShapeData getCollisionShapeData() {
    long cPtr = CollisionJNI.btGImpactMeshShapeData_collisionShapeData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionShapeData(cPtr, false);
}
