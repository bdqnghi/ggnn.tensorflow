public void setMassProps(float mass, Vector3 inertia) {
    DynamicsJNI.btRigidBody_setMassProps(swigCPtr, this, mass, inertia);
}
