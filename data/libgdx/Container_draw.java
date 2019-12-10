public void draw(Batch batch, float parentAlpha) {
    validate();
    if (isTransform()) {
        applyTransform(batch, computeTransform());
        drawBackground(batch, parentAlpha, 0, 0);
        if (clip) {
            batch.flush();
            float padLeft = this.padLeft.get(this), padBottom = this.padBottom.get(this);
            if (clipBegin(padLeft, padBottom, getWidth() - padLeft - padRight.get(this), getHeight() - padBottom - padTop.get(this))) {
                drawChildren(batch, parentAlpha);
                batch.flush();
                clipEnd();
            }
        } else
            drawChildren(batch, parentAlpha);
        resetTransform(batch);
    } else {
        drawBackground(batch, parentAlpha, getX(), getY());
        super.draw(batch, parentAlpha);
    }
}
