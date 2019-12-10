public void find_intersection(btAABB other, btAABB intersection) {
    CollisionJNI.btAABB_find_intersection(swigCPtr, this, btAABB.getCPtr(other), other, btAABB.getCPtr(intersection), intersection);
}
