public void setCollisionObjectData(btCollisionObjectDoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_collisionObjectData_set(swigCPtr, this, btCollisionObjectDoubleData.getCPtr(value), value);
}
