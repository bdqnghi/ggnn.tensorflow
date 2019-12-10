@Override
public void rotate90(boolean clockwise) {
    // Rotate texture.
    super.rotate90(clockwise);
    float oldOriginX = getOriginX();
    float oldOriginY = getOriginY();
    float oldOffsetX = region.offsetX;
    float oldOffsetY = region.offsetY;
    float widthRatio = getWidthRatio();
    float heightRatio = getHeightRatio();
    if (clockwise) {
        region.offsetX = oldOffsetY;
        region.offsetY = region.originalHeight * heightRatio - oldOffsetX - region.packedWidth * widthRatio;
    } else {
        region.offsetX = region.originalWidth * widthRatio - oldOffsetY - region.packedHeight * heightRatio;
        region.offsetY = oldOffsetX;
    }
    // Update position and origin with new offsets.
    translate(region.offsetX - oldOffsetX, region.offsetY - oldOffsetY);
    setOrigin(oldOriginX, oldOriginY);
}
