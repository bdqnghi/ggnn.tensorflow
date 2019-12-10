public void setAnisotropicFriction(btVector3FloatData value) {
    CollisionJNI.btCollisionObjectFloatData_anisotropicFriction_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
