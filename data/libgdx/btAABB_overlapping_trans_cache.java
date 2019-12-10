public boolean overlapping_trans_cache(btAABB box, BT_BOX_BOX_TRANSFORM_CACHE transcache, boolean fulltest) {
    return CollisionJNI.btAABB_overlapping_trans_cache(swigCPtr, this, btAABB.getCPtr(box), box, BT_BOX_BOX_TRANSFORM_CACHE.getCPtr(transcache), transcache, fulltest);
}
