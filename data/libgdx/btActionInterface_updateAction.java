public void updateAction(btCollisionWorld collisionWorld, float deltaTimeStep) {
    DynamicsJNI.btActionInterface_updateAction(swigCPtr, this, btCollisionWorld.getCPtr(collisionWorld), collisionWorld, deltaTimeStep);
}
