public void setAnisotropicFriction(btVector3DoubleData value) {
    CollisionJNI.btCollisionObjectDoubleData_anisotropicFriction_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
