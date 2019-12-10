public void copy_with_margin(btAABB other, float margin) {
    CollisionJNI.btAABB_copy_with_margin(swigCPtr, this, btAABB.getCPtr(other), other, margin);
}
