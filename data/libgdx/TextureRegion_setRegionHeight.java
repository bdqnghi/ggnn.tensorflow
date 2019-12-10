public void setRegionHeight(int height) {
    if (isFlipY()) {
        setV(v2 + height / (float) texture.getHeight());
    } else {
        setV2(v + height / (float) texture.getHeight());
    }
}
