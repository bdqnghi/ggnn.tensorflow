public btVector3 getPosition() {
    long cPtr = SoftbodyJNI.btSoftBody_LJoint_Specs_position_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
