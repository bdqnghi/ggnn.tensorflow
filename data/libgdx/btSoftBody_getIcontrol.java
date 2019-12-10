public btSoftBody.AJoint.IControl getIcontrol() {
    long cPtr = SoftbodyJNI.btSoftBody_AJoint_icontrol_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.AJoint.IControl(cPtr, false);
}
