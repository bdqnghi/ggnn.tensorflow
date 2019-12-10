public btVector4 getSeparating_normal() {
    long cPtr = CollisionJNI.GIM_TRIANGLE_CONTACT_separating_normal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector4(cPtr, false);
}
