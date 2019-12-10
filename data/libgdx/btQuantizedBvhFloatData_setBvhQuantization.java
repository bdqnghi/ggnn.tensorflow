public void setBvhQuantization(btVector3FloatData value) {
    CollisionJNI.btQuantizedBvhFloatData_bvhQuantization_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
