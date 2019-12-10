protected boolean isInsideRegion(TextureRegion region, float x, float y) {
    float rx = region.getRegionX(), ry = region.getRegionY();
    return rx <= x && x <= rx + region.getRegionWidth() && ry <= y && y <= ry + region.getRegionHeight();
}
