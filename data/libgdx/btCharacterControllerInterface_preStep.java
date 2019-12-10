public void preStep(btCollisionWorld collisionWorld) {
    DynamicsJNI.btCharacterControllerInterface_preStep(swigCPtr, this, btCollisionWorld.getCPtr(collisionWorld), collisionWorld);
}
