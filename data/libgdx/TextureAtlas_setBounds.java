@Override
public void setBounds(float x, float y, float width, float height) {
    float widthRatio = width / region.originalWidth;
    float heightRatio = height / region.originalHeight;
    region.offsetX = originalOffsetX * widthRatio;
    region.offsetY = originalOffsetY * heightRatio;
    int packedWidth = region.rotate ? region.packedHeight : region.packedWidth;
    int packedHeight = region.rotate ? region.packedWidth : region.packedHeight;
    super.setBounds(x + region.offsetX, y + region.offsetY, packedWidth * widthRatio, packedHeight * heightRatio);
}
