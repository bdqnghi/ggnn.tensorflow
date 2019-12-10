public void interpolate_normals(btVector3 normals, int normal_count) {
    CollisionJNI.GIM_CONTACT_interpolate_normals(swigCPtr, this, btVector3.getCPtr(normals), normals, normal_count);
}
