public void setCollisionShapeData(btCollisionShapeData value) {
    CollisionJNI.btTriangleMeshShapeData_collisionShapeData_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
