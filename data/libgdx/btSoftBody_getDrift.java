public btVector3 getDrift() {
    long cPtr = SoftbodyJNI.btSoftBody_Joint_drift_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
