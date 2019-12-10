public void drawDebug(ShapeRenderer shapes) {
    validate();
    if (isTransform()) {
        applyTransform(shapes, computeTransform());
        if (clip) {
            shapes.flush();
            float padLeft = this.padLeft.get(this), padBottom = this.padBottom.get(this);
            boolean draw = background == null ? clipBegin(0, 0, getWidth(), getHeight()) : clipBegin(padLeft, padBottom, getWidth() - padLeft - padRight.get(this), getHeight() - padBottom - padTop.get(this));
            if (draw) {
                drawDebugChildren(shapes);
                clipEnd();
            }
        } else
            drawDebugChildren(shapes);
        resetTransform(shapes);
    } else
        super.drawDebug(shapes);
}
