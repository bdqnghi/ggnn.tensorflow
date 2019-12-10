public void setU2(float u2) {
    this.u2 = u2;
    regionWidth = Math.round(Math.abs(u2 - u) * texture.getWidth());
}
