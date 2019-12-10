private int drawFont(BitmapFont font, String description, boolean linearFiltering, boolean useShader, float smoothing, int x) {
    int y = 10;
    float maxWidth = 0;
    spriteBatch.setShader(null);
    descriptionFont.draw(spriteBatch, description, x, y);
    spriteBatch.flush();
    y += 10 + 2 * descriptionFont.getLineHeight();
    // set filters for each page
    TextureFilter minFilter = linearFiltering ? TextureFilter.MipMapLinearNearest : TextureFilter.Nearest;
    TextureFilter magFilter = linearFiltering ? TextureFilter.Linear : TextureFilter.Nearest;
    for (int i = 0; i < font.getRegions().size; i++) {
        font.getRegion(i).getTexture().setFilter(minFilter, magFilter);
    }
    if (useShader) {
        spriteBatch.setShader(distanceFieldShader);
    } else {
        spriteBatch.setShader(null);
    }
    for (float scale : SCALES) {
        font.getData().setScale(scale);
        layout.setText(font, TEXT);
        maxWidth = Math.max(maxWidth, layout.width);
        if (useShader) {
            distanceFieldShader.setSmoothing(smoothing / scale);
        }
        font.draw(spriteBatch, layout, x, y);
        y += font.getLineHeight();
        spriteBatch.flush();
    }
    return (int) Math.ceil(maxWidth);
}
