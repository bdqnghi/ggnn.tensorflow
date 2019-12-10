public void renderSkeleton(final Vector3 from, final Node node) {
    final Vector3 pos = vectorPool.obtain();
    node.globalTransform.getTranslation(pos);
    shapeRenderer.setColor(node.isAnimated ? Color.RED : Color.YELLOW);
    shapeRenderer.box(pos.x, pos.y, pos.z, 0.5f, 0.5f, 0.5f);
    shapeRenderer.setColor(Color.WHITE);
    shapeRenderer.line(from.x, from.y, from.z, pos.x, pos.y, pos.z);
    for (Node child : node.getChildren()) renderSkeleton(pos, child);
    vectorPool.free(pos);
}
