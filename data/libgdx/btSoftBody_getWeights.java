public btVector3 getWeights() {
    long cPtr = SoftbodyJNI.btSoftBody_SContact_weights_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
