public void translate(Vector3 v) {
    DynamicsJNI.btRigidBody_translate(swigCPtr, this, v);
}
