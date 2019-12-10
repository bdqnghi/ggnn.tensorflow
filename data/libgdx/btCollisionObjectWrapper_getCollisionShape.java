public btCollisionShape getCollisionShape() {
    long cPtr = CollisionJNI.btCollisionObjectWrapper_getCollisionShape(swigCPtr, this);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
