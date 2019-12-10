public void setWorldTransform(btTransformDoubleData value) {
    CollisionJNI.btCollisionObjectDoubleData_worldTransform_set(swigCPtr, this, btTransformDoubleData.getCPtr(value), value);
}
