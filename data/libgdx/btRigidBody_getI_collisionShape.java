private btCollisionShape getI_collisionShape() {
    long cPtr = DynamicsJNI.btRigidBody_btRigidBodyConstructionInfo_i_collisionShape_get(swigCPtr, this);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
