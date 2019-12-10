public void draw(Batch batch, float parentAlpha) {
    // if this actor is not within the view of the camera we don't draw it.
    if (isCulled())
        return;
    // otherwise we draw via the super class method
    super.draw(batch, parentAlpha);
}
