public void setNormal(btVector3 value) {
    CollisionJNI.GIM_CONTACT_normal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
