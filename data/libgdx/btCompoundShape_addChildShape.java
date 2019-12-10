public void addChildShape(Matrix4 localTransform, btCollisionShape shape) {
    internalAddChildShape(localTransform, shape);
    children.add(shape);
    shape.obtain();
}
