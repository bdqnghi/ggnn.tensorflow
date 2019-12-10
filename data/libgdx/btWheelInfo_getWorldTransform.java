public btTransform getWorldTransform() {
    long cPtr = DynamicsJNI.btWheelInfo_worldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
