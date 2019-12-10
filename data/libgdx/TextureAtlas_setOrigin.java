@Override
public void setOrigin(float originX, float originY) {
    super.setOrigin(originX - region.offsetX, originY - region.offsetY);
}
