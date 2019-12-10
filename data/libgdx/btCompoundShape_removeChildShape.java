public void removeChildShape(btCollisionShape shape) {
    internalRemoveChildShape(shape);
    final int idx = children.indexOf(shape, false);
    if (idx >= 0)
        children.removeIndex(idx).release();
}
