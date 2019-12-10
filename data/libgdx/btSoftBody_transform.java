public void transform(Matrix4 trs) {
    SoftbodyJNI.btSoftBody_transform(swigCPtr, this, trs);
}
