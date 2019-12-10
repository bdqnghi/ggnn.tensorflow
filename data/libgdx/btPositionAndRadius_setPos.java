public void setPos(btVector3FloatData value) {
    CollisionJNI.btPositionAndRadius_pos_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
