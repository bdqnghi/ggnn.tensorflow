private void scaleAndComputePrefSize() {
    BitmapFont font = cache.getFont();
    float oldScaleX = font.getScaleX();
    float oldScaleY = font.getScaleY();
    if (fontScaleX != 1 || fontScaleY != 1)
        font.getData().setScale(fontScaleX, fontScaleY);
    computePrefSize();
    if (fontScaleX != 1 || fontScaleY != 1)
        font.getData().setScale(oldScaleX, oldScaleY);
}
