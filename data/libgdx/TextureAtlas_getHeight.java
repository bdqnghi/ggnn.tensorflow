@Override
public float getHeight() {
    return super.getHeight() / region.getRotatedPackedHeight() * region.originalHeight;
}
