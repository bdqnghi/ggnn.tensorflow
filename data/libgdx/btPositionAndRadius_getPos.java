public btVector3FloatData getPos() {
    long cPtr = CollisionJNI.btPositionAndRadius_pos_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
