public btCollisionObjectArray getOverlappingPairs() {
    return new btCollisionObjectArray(CollisionJNI.btGhostObject_getOverlappingPairs__SWIG_0(swigCPtr, this), false);
}
