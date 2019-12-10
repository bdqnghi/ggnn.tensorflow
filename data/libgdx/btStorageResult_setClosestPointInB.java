public void setClosestPointInB(btVector3 value) {
    CollisionJNI.btStorageResult_closestPointInB_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
