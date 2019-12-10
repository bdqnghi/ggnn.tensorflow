public btAABB getGlobalBox() {
    return new btAABB(CollisionJNI.btGImpactBvh_getGlobalBox(swigCPtr, this), true);
}
