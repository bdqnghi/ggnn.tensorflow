public void removeSoftBody(btSoftBody body) {
    SoftbodyJNI.btSoftRigidDynamicsWorld_removeSoftBody(swigCPtr, this, btSoftBody.getCPtr(body), body);
}
