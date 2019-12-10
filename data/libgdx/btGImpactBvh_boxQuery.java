public boolean boxQuery(btAABB box, SWIGTYPE_p_btAlignedObjectArrayT_int_t collided_results) {
    return CollisionJNI.btGImpactBvh_boxQuery(swigCPtr, this, btAABB.getCPtr(box), box, SWIGTYPE_p_btAlignedObjectArrayT_int_t.getCPtr(collided_results));
}
