public void draw(Batch batch, float parentAlpha) {
    validate();
    Color color = getColor();
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha);
    float x = getX();
    float y = getY();
    float scaleX = getScaleX();
    float scaleY = getScaleY();
    if (drawable instanceof TransformDrawable) {
        float rotation = getRotation();
        if (scaleX != 1 || scaleY != 1 || rotation != 0) {
            ((TransformDrawable) drawable).draw(batch, x + imageX, y + imageY, getOriginX() - imageX, getOriginY() - imageY, imageWidth, imageHeight, scaleX, scaleY, rotation);
            return;
        }
    }
    if (drawable != null)
        drawable.draw(batch, x + imageX, y + imageY, imageWidth * scaleX, imageHeight * scaleY);
}
