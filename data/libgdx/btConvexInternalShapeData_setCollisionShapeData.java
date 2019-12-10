public void setCollisionShapeData(btCollisionShapeData value) {
    CollisionJNI.btConvexInternalShapeData_collisionShapeData_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
