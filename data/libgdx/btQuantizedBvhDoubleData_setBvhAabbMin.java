public void setBvhAabbMin(btVector3DoubleData value) {
    CollisionJNI.btQuantizedBvhDoubleData_bvhAabbMin_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
