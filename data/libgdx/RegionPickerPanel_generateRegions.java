void generateRegions(GenerationMode mode) {
    // generate regions
    texturePanel.clear();
    Texture texture = texturePanel.getTexture();
    int rows = (int) rowSlider.getValue(), columns = (int) columnSlider.getValue(), yOffset = texture.getHeight() / rows, xOffset = texture.getWidth() / columns;
    if (mode == GenerationMode.ByRows) {
        for (int j = 0; j < rows; ++j) {
            int rowOffset = j * yOffset;
            for (int i = 0; i < columns; ++i) {
                texturePanel.unselectedRegions.add(new TextureRegion(texture, i * xOffset, rowOffset, xOffset, yOffset));
            }
        }
    } else if (mode == GenerationMode.ByColumns) {
        for (int i = 0; i < columns; ++i) {
            int columnOffset = i * xOffset;
            for (int j = 0; j < rows; ++j) {
                texturePanel.unselectedRegions.add(new TextureRegion(texture, columnOffset, j * yOffset, xOffset, yOffset));
            }
        }
    }
}
