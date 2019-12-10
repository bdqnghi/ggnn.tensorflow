public void removeRigidBody(btRigidBody body) {
    DynamicsJNI.btDynamicsWorld_removeRigidBody(swigCPtr, this, btRigidBody.getCPtr(body), body);
}
