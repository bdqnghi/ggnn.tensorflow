public void appendAnchor(int node, btRigidBody body, Vector3 localPivot) {
    SoftbodyJNI.btSoftBody_appendAnchor__SWIG_5(swigCPtr, this, node, btRigidBody.getCPtr(body), body, localPivot);
}
