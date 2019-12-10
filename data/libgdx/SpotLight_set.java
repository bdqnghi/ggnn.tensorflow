public SpotLight set(final float r, final float g, final float b, final float posX, final float posY, final float posZ, final float dirX, final float dirY, final float dirZ, final float intensity, final float cutoffAngle, final float exponent) {
    this.color.set(r, g, b, 1f);
    this.position.set(posX, posY, posZ);
    this.direction.set(dirX, dirY, dirZ).nor();
    this.intensity = intensity;
    this.cutoffAngle = cutoffAngle;
    this.exponent = exponent;
    return this;
}
