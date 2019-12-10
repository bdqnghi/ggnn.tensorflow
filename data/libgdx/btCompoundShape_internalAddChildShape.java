private void internalAddChildShape(Matrix4 localTransform, btCollisionShape shape) {
    CollisionJNI.btCompoundShape_internalAddChildShape(swigCPtr, this, localTransform, btCollisionShape.getCPtr(shape), shape);
}
