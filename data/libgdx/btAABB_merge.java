public void merge(btAABB box) {
    CollisionJNI.btAABB_merge(swigCPtr, this, btAABB.getCPtr(box), box);
}
