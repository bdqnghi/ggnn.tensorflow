public void setCollisionShapeData(btCollisionShapeData value) {
    CollisionJNI.btGImpactMeshShapeData_collisionShapeData_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
