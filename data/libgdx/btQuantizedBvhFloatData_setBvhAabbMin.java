public void setBvhAabbMin(btVector3FloatData value) {
    CollisionJNI.btQuantizedBvhFloatData_bvhAabbMin_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
