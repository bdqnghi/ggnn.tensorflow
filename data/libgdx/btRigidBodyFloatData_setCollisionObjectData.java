public void setCollisionObjectData(btCollisionObjectFloatData value) {
    DynamicsJNI.btRigidBodyFloatData_collisionObjectData_set(swigCPtr, this, btCollisionObjectFloatData.getCPtr(value), value);
}
