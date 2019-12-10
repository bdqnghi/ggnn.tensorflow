public void rotate(Quaternion rot) {
    SoftbodyJNI.btSoftBody_rotate(swigCPtr, this, rot);
}
