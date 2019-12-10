public void translate(Vector3 trs) {
    SoftbodyJNI.btSoftBody_translate(swigCPtr, this, trs);
}
