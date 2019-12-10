private void internalRemoveChildShape(btCollisionShape shape) {
    CollisionJNI.btCompoundShape_internalRemoveChildShape(swigCPtr, this, btCollisionShape.getCPtr(shape), shape);
}
