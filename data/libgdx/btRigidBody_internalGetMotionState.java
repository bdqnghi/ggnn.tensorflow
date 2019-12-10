private btMotionState internalGetMotionState() {
    long cPtr = DynamicsJNI.btRigidBody_internalGetMotionState__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btMotionState(cPtr, false);
}
