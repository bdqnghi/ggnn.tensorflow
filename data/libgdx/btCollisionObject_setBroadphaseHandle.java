public void setBroadphaseHandle(btBroadphaseProxy handle) {
    CollisionJNI.btCollisionObject_setBroadphaseHandle(swigCPtr, this, btBroadphaseProxy.getCPtr(handle), handle);
}
