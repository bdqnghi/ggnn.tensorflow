public Vector3 getLocalInertia() {
    return DynamicsJNI.btRigidBody_getLocalInertia(swigCPtr, this);
}
