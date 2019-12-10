public void addRigidBody(btRigidBody body, short group, short mask) {
    DynamicsJNI.btSimpleDynamicsWorld_addRigidBody__SWIG_1(swigCPtr, this, btRigidBody.getCPtr(body), body, group, mask);
}
