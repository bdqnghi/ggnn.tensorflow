// Make a new 'pixmapSize' square texture region with 'patchSize' patches in it. Each patch is a different color.
static TextureRegion newPatchPix(int patchSize, int pixmapSize) {
    final int pixmapDim = MathUtils.nextPowerOfTwo(pixmapSize);
    Pixmap p = new Pixmap(pixmapDim, pixmapDim, Pixmap.Format.RGBA8888);
    p.setColor(1, 1, 1, 0);
    p.fill();
    for (int x = 0; x < pixmapSize; x += patchSize) {
        for (int y = 0; y < pixmapSize; y += patchSize) {
            p.setColor(x / (float) pixmapSize, y / (float) pixmapSize, 1.0f, 1.0f);
            p.fillRectangle(x, y, patchSize, patchSize);
        }
    }
    return new TextureRegion(new Texture(p), pixmapSize, pixmapSize);
}
