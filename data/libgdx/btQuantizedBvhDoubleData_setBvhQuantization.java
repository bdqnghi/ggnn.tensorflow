public void setBvhQuantization(btVector3DoubleData value) {
    CollisionJNI.btQuantizedBvhDoubleData_bvhQuantization_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
