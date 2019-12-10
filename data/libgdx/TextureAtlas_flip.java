@Override
public void flip(boolean x, boolean y) {
    // Flip texture.
    if (region.rotate)
        super.flip(y, x);
    else
        super.flip(x, y);
    float oldOriginX = getOriginX();
    float oldOriginY = getOriginY();
    float oldOffsetX = region.offsetX;
    float oldOffsetY = region.offsetY;
    float widthRatio = getWidthRatio();
    float heightRatio = getHeightRatio();
    region.offsetX = originalOffsetX;
    region.offsetY = originalOffsetY;
    // Updates x and y offsets.
    region.flip(x, y);
    originalOffsetX = region.offsetX;
    originalOffsetY = region.offsetY;
    region.offsetX *= widthRatio;
    region.offsetY *= heightRatio;
    // Update position and origin with new offsets.
    translate(region.offsetX - oldOffsetX, region.offsetY - oldOffsetY);
    setOrigin(oldOriginX, oldOriginY);
}
