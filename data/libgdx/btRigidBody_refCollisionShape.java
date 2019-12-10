protected void refCollisionShape(btCollisionShape shape) {
    if (collisionShape == shape)
        return;
    if (collisionShape != null)
        collisionShape.release();
    collisionShape = shape;
    if (collisionShape != null)
        collisionShape.obtain();
}
