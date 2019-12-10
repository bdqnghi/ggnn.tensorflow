public btCollisionShape getShape() {
    long cPtr = CollisionJNI.btCollisionObjectWrapper_shape_get(swigCPtr, this);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
