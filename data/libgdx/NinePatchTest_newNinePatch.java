// Make a basic NinePatch with different colors in each of the nine patches
static NinePatch newNinePatch() {
    final int patchSize = 8;
    final int pixmapSize = patchSize * 3;
    TextureRegion tr = newPatchPix(patchSize, pixmapSize);
    return new NinePatch(tr, patchSize, patchSize, patchSize, patchSize);
}
