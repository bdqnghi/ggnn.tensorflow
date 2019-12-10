public void setBvhAabbMax(btVector3DoubleData value) {
    CollisionJNI.btQuantizedBvhDoubleData_bvhAabbMax_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
