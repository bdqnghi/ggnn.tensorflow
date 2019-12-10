public boolean overlapping_trans_conservative2(btAABB box, BT_BOX_BOX_TRANSFORM_CACHE trans1_to_0) {
    return CollisionJNI.btAABB_overlapping_trans_conservative2(swigCPtr, this, btAABB.getCPtr(box), box, BT_BOX_BOX_TRANSFORM_CACHE.getCPtr(trans1_to_0), trans1_to_0);
}
