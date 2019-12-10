public void draw(Batch batch, float alphaModulation) {
    float oldAlpha = getColor().a;
    setAlpha(oldAlpha * alphaModulation);
    draw(batch);
    setAlpha(oldAlpha);
}
