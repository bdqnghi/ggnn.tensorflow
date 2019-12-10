private btCollisionShape internalGetCollisionShape() {
    long cPtr = CollisionJNI.btCollisionObject_internalGetCollisionShape__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
