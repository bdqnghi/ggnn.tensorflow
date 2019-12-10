// Make a degenerate NinePatch
static NinePatch newDegenerateNinePatch() {
    final int patchSize = 8;
    final int pixmapSize = patchSize * 3;
    TextureRegion tr = newPatchPix(patchSize, pixmapSize);
    return new NinePatch(tr);
}
