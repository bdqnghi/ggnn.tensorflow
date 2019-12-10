public void setNewBroadphaseProxy(btBroadphaseProxy broadphaseProxy) {
    DynamicsJNI.btRigidBody_setNewBroadphaseProxy(swigCPtr, this, btBroadphaseProxy.getCPtr(broadphaseProxy), broadphaseProxy);
}
