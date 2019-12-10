// Make a ninepatch with no middle band, just top three and bottom three.
static NinePatch newMidlessPatch() {
    final int patchSize = 8;
    final int fullPatchHeight = patchSize * 2;
    final int fullPatchWidth = patchSize * 3;
    final int pixmapDim = MathUtils.nextPowerOfTwo(Math.max(fullPatchWidth, fullPatchHeight));
    Pixmap testPatch = new Pixmap(pixmapDim, pixmapDim, Pixmap.Format.RGBA8888);
    testPatch.setColor(1, 1, 1, 0);
    testPatch.fill();
    for (int x = 0; x < fullPatchWidth; x += patchSize) {
        for (int y = 0; y < fullPatchHeight; y += patchSize) {
            testPatch.setColor(x / (float) fullPatchWidth, y / (float) fullPatchHeight, 1.0f, 1.0f);
            testPatch.fillRectangle(x, y, patchSize, patchSize);
        }
    }
    return new NinePatch(new TextureRegion(new Texture(testPatch), fullPatchWidth, fullPatchHeight), patchSize, patchSize, patchSize, patchSize);
}
