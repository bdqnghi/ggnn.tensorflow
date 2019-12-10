public void setWorldTransform(btTransformFloatData value) {
    CollisionJNI.btCollisionObjectFloatData_worldTransform_set(swigCPtr, this, btTransformFloatData.getCPtr(value), value);
}
