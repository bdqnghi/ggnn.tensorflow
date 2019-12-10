public boolean find_triangle_collision_clip_method(btPrimitiveTriangle other, GIM_TRIANGLE_CONTACT contacts) {
    return CollisionJNI.btPrimitiveTriangle_find_triangle_collision_clip_method(swigCPtr, this, btPrimitiveTriangle.getCPtr(other), other, GIM_TRIANGLE_CONTACT.getCPtr(contacts), contacts);
}
