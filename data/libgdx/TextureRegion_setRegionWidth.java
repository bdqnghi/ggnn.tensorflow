public void setRegionWidth(int width) {
    if (isFlipX()) {
        setU(u2 + width / (float) texture.getWidth());
    } else {
        setU2(u + width / (float) texture.getWidth());
    }
}
