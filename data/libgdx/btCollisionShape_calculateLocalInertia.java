public void calculateLocalInertia(float mass, Vector3 inertia) {
    CollisionJNI.btCollisionShape_calculateLocalInertia(swigCPtr, this, mass, inertia);
}
