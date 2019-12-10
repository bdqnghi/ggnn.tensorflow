public void setVelocityForTimeInterval(Vector3 velocity, float timeInterval) {
    DynamicsJNI.btCharacterControllerInterface_setVelocityForTimeInterval(swigCPtr, this, velocity, timeInterval);
}
