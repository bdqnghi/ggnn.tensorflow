public boolean boxQueryTrans(btAABB box, Matrix4 transform, SWIGTYPE_p_btAlignedObjectArrayT_int_t collided_results) {
    return CollisionJNI.btGImpactBvh_boxQueryTrans(swigCPtr, this, btAABB.getCPtr(box), box, transform, SWIGTYPE_p_btAlignedObjectArrayT_int_t.getCPtr(collided_results));
}
