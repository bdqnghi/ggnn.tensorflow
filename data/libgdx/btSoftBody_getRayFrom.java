public btVector3 getRayFrom() {
    long cPtr = SoftbodyJNI.btSoftBody_RayFromToCaster_rayFrom_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
