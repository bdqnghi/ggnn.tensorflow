public btAABB getGlobalBox() {
    return new btAABB(CollisionJNI.btGImpactQuantizedBvh_getGlobalBox(swigCPtr, this), true);
}
