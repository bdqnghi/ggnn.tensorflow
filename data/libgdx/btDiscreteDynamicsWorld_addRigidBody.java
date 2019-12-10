public void addRigidBody(btRigidBody body, short group, short mask) {
    DynamicsJNI.btDiscreteDynamicsWorld_addRigidBody__SWIG_1(swigCPtr, this, btRigidBody.getCPtr(body), body, group, mask);
}
