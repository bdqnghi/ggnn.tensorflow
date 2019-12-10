public btVector3 getRayTo() {
    long cPtr = SoftbodyJNI.btSoftBody_RayFromToCaster_rayTo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
