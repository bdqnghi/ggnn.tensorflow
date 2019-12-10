public void setCollisionObject(btCollisionObject value) {
    SoftbodyJNI.btSoftBody_Body_collisionObject_set(swigCPtr, this, btCollisionObject.getCPtr(value), value);
}
