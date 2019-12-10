public void setPoint(btVector3 value) {
    CollisionJNI.GIM_CONTACT_point_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
