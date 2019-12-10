public void setShape(btCollisionShape value) {
    CollisionJNI.btCollisionObjectWrapper_shape_set(swigCPtr, this, btCollisionShape.getCPtr(value), value);
}
