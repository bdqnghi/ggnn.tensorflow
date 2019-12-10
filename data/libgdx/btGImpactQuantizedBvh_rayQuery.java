public boolean rayQuery(Vector3 ray_dir, Vector3 ray_origin, SWIGTYPE_p_btAlignedObjectArrayT_int_t collided_results) {
    return CollisionJNI.btGImpactQuantizedBvh_rayQuery(swigCPtr, this, ray_dir, ray_origin, SWIGTYPE_p_btAlignedObjectArrayT_int_t.getCPtr(collided_results));
}
