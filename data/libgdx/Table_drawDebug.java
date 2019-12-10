public void drawDebug(ShapeRenderer shapes) {
    if (isTransform()) {
        applyTransform(shapes, computeTransform());
        drawDebugRects(shapes);
        if (clip) {
            shapes.flush();
            float x = 0, y = 0, width = getWidth(), height = getHeight();
            if (background != null) {
                x = padLeft.get(this);
                y = padBottom.get(this);
                width -= x + padRight.get(this);
                height -= y + padTop.get(this);
            }
            if (clipBegin(x, y, width, height)) {
                drawDebugChildren(shapes);
                clipEnd();
            }
        } else
            drawDebugChildren(shapes);
        resetTransform(shapes);
    } else {
        drawDebugRects(shapes);
        super.drawDebug(shapes);
    }
}
