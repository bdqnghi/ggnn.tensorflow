public void setTransform(btTransformFloatData value) {
    CollisionJNI.btCompoundShapeChildData_transform_set(swigCPtr, this, btTransformFloatData.getCPtr(value), value);
}
