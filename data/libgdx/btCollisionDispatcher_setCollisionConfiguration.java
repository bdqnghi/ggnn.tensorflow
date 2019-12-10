public void setCollisionConfiguration(btCollisionConfiguration config) {
    CollisionJNI.btCollisionDispatcher_setCollisionConfiguration(swigCPtr, this, btCollisionConfiguration.getCPtr(config), config);
}
