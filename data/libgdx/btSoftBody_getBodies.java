public btSoftBody.Body getBodies() {
    long cPtr = SoftbodyJNI.btSoftBody_Joint_bodies_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.Body(cPtr, false);
}
