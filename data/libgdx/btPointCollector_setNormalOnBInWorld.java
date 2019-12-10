public void setNormalOnBInWorld(btVector3 value) {
    CollisionJNI.btPointCollector_normalOnBInWorld_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
