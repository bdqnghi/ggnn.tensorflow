// Make a upper-left "quad" patch (only 4 patches defined in the top-left corner of the ninepatch)
static NinePatch newULQuadPatch() {
    final int patchSize = 8;
    final int pixmapSize = patchSize * 2;
    TextureRegion tr = newPatchPix(patchSize, pixmapSize);
    return new NinePatch(tr, patchSize, 0, patchSize, 0);
}
