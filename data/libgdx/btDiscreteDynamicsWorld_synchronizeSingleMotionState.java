public void synchronizeSingleMotionState(btRigidBody body) {
    DynamicsJNI.btDiscreteDynamicsWorld_synchronizeSingleMotionState(swigCPtr, this, btRigidBody.getCPtr(body), body);
}
