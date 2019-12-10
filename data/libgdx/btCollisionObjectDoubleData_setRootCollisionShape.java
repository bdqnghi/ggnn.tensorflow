public void setRootCollisionShape(btCollisionShapeData value) {
    CollisionJNI.btCollisionObjectDoubleData_rootCollisionShape_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
