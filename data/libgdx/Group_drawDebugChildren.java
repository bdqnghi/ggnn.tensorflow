/**
 * Draws all children. {@link #applyTransform(Batch, Matrix4)} should be called before and {@link #resetTransform(Batch)}
 * after this method if {@link #setTransform(boolean) transform} is true. If {@link #setTransform(boolean) transform} is false
 * these methods don't need to be called, children positions are temporarily offset by the group position when drawn. This
 * method avoids drawing children completely outside the {@link #setCullingArea(Rectangle) culling area}, if set.
 */
protected void drawDebugChildren(ShapeRenderer shapes) {
    SnapshotArray<Actor> children = this.children;
    Actor[] actors = children.begin();
    // No culling, draw all children.
    if (transform) {
        for (int i = 0, n = children.size; i < n; i++) {
            Actor child = actors[i];
            if (!child.isVisible())
                continue;
            if (!child.getDebug() && !(child instanceof Group))
                continue;
            child.drawDebug(shapes);
        }
        shapes.flush();
    } else {
        // No transform for this group, offset each child.
        float offsetX = x, offsetY = y;
        x = 0;
        y = 0;
        for (int i = 0, n = children.size; i < n; i++) {
            Actor child = actors[i];
            if (!child.isVisible())
                continue;
            if (!child.getDebug() && !(child instanceof Group))
                continue;
            float cx = child.x, cy = child.y;
            child.x = cx + offsetX;
            child.y = cy + offsetY;
            child.drawDebug(shapes);
            child.x = cx;
            child.y = cy;
        }
        x = offsetX;
        y = offsetY;
    }
    children.end();
}
