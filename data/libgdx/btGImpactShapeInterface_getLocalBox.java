public btAABB getLocalBox() {
    return new btAABB(CollisionJNI.btGImpactShapeInterface_getLocalBox(swigCPtr, this), false);
}
