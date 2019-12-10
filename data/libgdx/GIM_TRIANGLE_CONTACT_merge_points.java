public void merge_points(btVector4 plane, float margin, btVector3 points, int point_count) {
    CollisionJNI.GIM_TRIANGLE_CONTACT_merge_points(swigCPtr, this, btVector4.getCPtr(plane), plane, margin, btVector3.getCPtr(points), points, point_count);
}
