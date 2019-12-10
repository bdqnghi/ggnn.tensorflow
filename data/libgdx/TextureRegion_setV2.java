public void setV2(float v2) {
    this.v2 = v2;
    regionHeight = Math.round(Math.abs(v2 - v) * texture.getHeight());
}
