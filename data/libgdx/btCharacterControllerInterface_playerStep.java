public void playerStep(btCollisionWorld collisionWorld, float dt) {
    DynamicsJNI.btCharacterControllerInterface_playerStep(swigCPtr, this, btCollisionWorld.getCPtr(collisionWorld), collisionWorld, dt);
}
