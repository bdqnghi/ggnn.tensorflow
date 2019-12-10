@Override
public float getWidth() {
    return super.getWidth() / region.getRotatedPackedWidth() * region.originalWidth;
}
