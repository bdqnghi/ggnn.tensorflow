public void predictIntegratedTransform(float step, Matrix4 predictedTransform) {
    DynamicsJNI.btRigidBody_predictIntegratedTransform(swigCPtr, this, step, predictedTransform);
}
