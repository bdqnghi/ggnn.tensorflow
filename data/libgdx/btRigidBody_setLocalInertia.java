public void setLocalInertia(btVector3 value) {
    DynamicsJNI.btRigidBody_btRigidBodyConstructionInfo_localInertia_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
