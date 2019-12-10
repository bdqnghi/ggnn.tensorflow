public void setCollisionShapeData(btCollisionShapeData value) {
    CollisionJNI.btStaticPlaneShapeData_collisionShapeData_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
