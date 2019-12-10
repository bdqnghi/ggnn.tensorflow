public boolean has_collision(btAABB other) {
    return CollisionJNI.btAABB_has_collision(swigCPtr, this, btAABB.getCPtr(other), other);
}
