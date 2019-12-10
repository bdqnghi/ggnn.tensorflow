public void setInterpolationWorldTransform(btTransformFloatData value) {
    CollisionJNI.btCollisionObjectFloatData_interpolationWorldTransform_set(swigCPtr, this, btTransformFloatData.getCPtr(value), value);
}
