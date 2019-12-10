public void appendNode(Vector3 x, float m) {
    SoftbodyJNI.btSoftBody_appendNode(swigCPtr, this, x, m);
}
