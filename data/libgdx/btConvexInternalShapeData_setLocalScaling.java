public void setLocalScaling(btVector3FloatData value) {
    CollisionJNI.btConvexInternalShapeData_localScaling_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
