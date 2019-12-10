public void setCollisionShapeData(btCollisionShapeData value) {
    CollisionJNI.btCompoundShapeData_collisionShapeData_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
