public void setSeparating_normal(btVector4 value) {
    CollisionJNI.GIM_TRIANGLE_CONTACT_separating_normal_set(swigCPtr, this, btVector4.getCPtr(value), value);
}
