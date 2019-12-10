public void setRootCollisionShape(btCollisionShapeData value) {
    CollisionJNI.btCollisionObjectFloatData_rootCollisionShape_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
