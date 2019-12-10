public void setTransform(btTransform value) {
    CollisionJNI.btCompoundShapeChild_transform_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
