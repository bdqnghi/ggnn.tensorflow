public void proceedToTransform(Matrix4 newTrans) {
    DynamicsJNI.btRigidBody_proceedToTransform(swigCPtr, this, newTrans);
}
