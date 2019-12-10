private void setI_collisionShape(btCollisionShape value) {
    DynamicsJNI.btRigidBody_btRigidBodyConstructionInfo_i_collisionShape_set(swigCPtr, this, btCollisionShape.getCPtr(value), value);
}
