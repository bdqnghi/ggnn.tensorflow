public void setPointInWorld(btVector3 value) {
    CollisionJNI.btPointCollector_pointInWorld_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
