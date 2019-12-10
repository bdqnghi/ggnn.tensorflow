public void addContactPoint(Vector3 normalOnBInWorld, Vector3 pointInWorld, float depth) {
    CollisionJNI.btDiscreteCollisionDetectorInterface_Result_addContactPoint(swigCPtr, this, normalOnBInWorld, pointInWorld, depth);
}
