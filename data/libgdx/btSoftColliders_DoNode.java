public void DoNode(btSoftBody.Node n) {
    SoftbodyJNI.btSoftColliders_CollideSDF_RS_DoNode(swigCPtr, this, btSoftBody.Node.getCPtr(n), n);
}
