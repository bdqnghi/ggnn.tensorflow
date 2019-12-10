public boolean overlapping_trans_conservative(btAABB box, Matrix4 trans1_to_0) {
    return CollisionJNI.btAABB_overlapping_trans_conservative(swigCPtr, this, btAABB.getCPtr(box), box, trans1_to_0);
}
