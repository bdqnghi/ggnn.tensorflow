public void setU(float u) {
    this.u = u;
    regionWidth = Math.round(Math.abs(u2 - u) * texture.getWidth());
}
