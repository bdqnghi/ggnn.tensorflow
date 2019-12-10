public void addAeroForceToNode(Vector3 windVelocity, int nodeIndex) {
    SoftbodyJNI.btSoftBody_addAeroForceToNode(swigCPtr, this, windVelocity, nodeIndex);
}
