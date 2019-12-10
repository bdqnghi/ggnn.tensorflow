public void draw(Batch batch, float x, float y, float width, float height) {
    float batchColor = batch.getPackedColor();
    batch.setColor(batch.getColor().mul(color));
    TextureRegion region = getRegion();
    float regionWidth = region.getRegionWidth(), regionHeight = region.getRegionHeight();
    int fullX = (int) (width / regionWidth), fullY = (int) (height / regionHeight);
    float remainingX = width - regionWidth * fullX, remainingY = height - regionHeight * fullY;
    float startX = x, startY = y;
    float endX = x + width - remainingX, endY = y + height - remainingY;
    for (int i = 0; i < fullX; i++) {
        y = startY;
        for (int ii = 0; ii < fullY; ii++) {
            batch.draw(region, x, y, regionWidth, regionHeight);
            y += regionHeight;
        }
        x += regionWidth;
    }
    Texture texture = region.getTexture();
    float u = region.getU();
    float v2 = region.getV2();
    if (remainingX > 0) {
        // Right edge.
        float u2 = u + remainingX / texture.getWidth();
        float v = region.getV();
        y = startY;
        for (int ii = 0; ii < fullY; ii++) {
            batch.draw(texture, x, y, remainingX, regionHeight, u, v2, u2, v);
            y += regionHeight;
        }
        // Upper right corner.
        if (remainingY > 0) {
            v = v2 - remainingY / texture.getHeight();
            batch.draw(texture, x, y, remainingX, remainingY, u, v2, u2, v);
        }
    }
    if (remainingY > 0) {
        // Top edge.
        float u2 = region.getU2();
        float v = v2 - remainingY / texture.getHeight();
        x = startX;
        for (int i = 0; i < fullX; i++) {
            batch.draw(texture, x, y, regionWidth, remainingY, u, v2, u2, v);
            x += regionWidth;
        }
    }
    batch.setColor(batchColor);
}
