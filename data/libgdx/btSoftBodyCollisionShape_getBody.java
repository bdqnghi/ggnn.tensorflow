public btSoftBody getBody() {
    long cPtr = SoftbodyJNI.btSoftBodyCollisionShape_body_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
}
