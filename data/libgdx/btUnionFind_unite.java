public void unite(int p, int q) {
    CollisionJNI.btUnionFind_unite(swigCPtr, this, p, q);
}
