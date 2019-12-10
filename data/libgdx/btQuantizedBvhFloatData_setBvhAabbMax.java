public void setBvhAabbMax(btVector3FloatData value) {
    CollisionJNI.btQuantizedBvhFloatData_bvhAabbMax_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
