@Override
public void setUVRange(TextureRegion region) {
    if (!(hasUVTransform = (region != null))) {
        uOffset = vOffset = 0f;
        uScale = vScale = 1f;
    } else
        setUVRange(region.getU(), region.getV(), region.getU2(), region.getV2());
}
