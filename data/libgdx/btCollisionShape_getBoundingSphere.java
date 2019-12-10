public void getBoundingSphere(Vector3 center, SWIGTYPE_p_float radius) {
    CollisionJNI.btCollisionShape_getBoundingSphere(swigCPtr, this, center, SWIGTYPE_p_float.getCPtr(radius));
}
