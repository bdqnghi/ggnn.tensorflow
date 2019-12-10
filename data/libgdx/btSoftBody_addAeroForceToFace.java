public void addAeroForceToFace(Vector3 windVelocity, int faceIndex) {
    SoftbodyJNI.btSoftBody_addAeroForceToFace(swigCPtr, this, windVelocity, faceIndex);
}
