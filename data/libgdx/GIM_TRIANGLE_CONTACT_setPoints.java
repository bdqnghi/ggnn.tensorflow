public void setPoints(btVector3 value) {
    CollisionJNI.GIM_TRIANGLE_CONTACT_points_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
