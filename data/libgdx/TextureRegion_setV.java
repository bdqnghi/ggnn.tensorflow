public void setV(float v) {
    this.v = v;
    regionHeight = Math.round(Math.abs(v2 - v) * texture.getHeight());
}
