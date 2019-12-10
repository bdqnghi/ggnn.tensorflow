public btCollisionObjectConstArray getCollisionDisabledObjects() {
    long cPtr = SoftbodyJNI.btSoftBody_collisionDisabledObjects_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionObjectConstArray(cPtr, false);
}
