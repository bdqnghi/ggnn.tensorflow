public void applyCentralImpulse(Vector3 impulse) {
    DynamicsJNI.btRigidBody_applyCentralImpulse(swigCPtr, this, impulse);
}
