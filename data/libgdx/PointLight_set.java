public PointLight set(final float r, final float g, final float b, final float x, final float y, final float z, final float intensity) {
    this.color.set(r, g, b, 1f);
    this.position.set(x, y, z);
    this.intensity = intensity;
    return this;
}
