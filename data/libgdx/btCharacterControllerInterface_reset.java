public void reset(btCollisionWorld collisionWorld) {
    DynamicsJNI.btCharacterControllerInterface_reset(swigCPtr, this, btCollisionWorld.getCPtr(collisionWorld), collisionWorld);
}
