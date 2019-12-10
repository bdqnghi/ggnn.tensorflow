public static btSoftBody.AJoint.IControl Default() {
    long cPtr = SoftbodyJNI.btSoftBody_AJoint_IControl_Default();
    return (cPtr == 0) ? null : new btSoftBody.AJoint.IControl(cPtr, false);
}
