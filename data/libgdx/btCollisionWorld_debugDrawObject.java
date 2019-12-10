public void debugDrawObject(Matrix4 worldTransform, btCollisionShape shape, Vector3 color) {
    CollisionJNI.btCollisionWorld_debugDrawObject(swigCPtr, this, worldTransform, btCollisionShape.getCPtr(shape), shape, color);
}
