public float Speed(btSoftBody.AJoint arg0, float current) {
    return SoftbodyJNI.btSoftBody_AJoint_IControl_Speed(swigCPtr, this, btSoftBody.AJoint.getCPtr(arg0), arg0, current);
}
