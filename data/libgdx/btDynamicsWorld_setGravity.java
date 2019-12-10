public void setGravity(Vector3 gravity) {
    DynamicsJNI.btDynamicsWorld_setGravity(swigCPtr, this, gravity);
}
