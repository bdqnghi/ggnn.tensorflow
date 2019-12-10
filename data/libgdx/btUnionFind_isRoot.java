public boolean isRoot(int x) {
    return CollisionJNI.btUnionFind_isRoot(swigCPtr, this, x);
}
