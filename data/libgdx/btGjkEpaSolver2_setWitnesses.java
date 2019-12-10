public void setWitnesses(btVector3 value) {
    CollisionJNI.btGjkEpaSolver2_sResults_witnesses_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
