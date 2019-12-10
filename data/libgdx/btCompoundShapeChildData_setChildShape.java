public void setChildShape(btCollisionShapeData value) {
    CollisionJNI.btCompoundShapeChildData_childShape_set(swigCPtr, this, btCollisionShapeData.getCPtr(value), value);
}
