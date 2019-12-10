public DirectionalLight set(final float r, final float g, final float b, final float dirX, final float dirY, final float dirZ) {
    this.color.set(r, g, b, 1f);
    this.direction.set(dirX, dirY, dirZ).nor();
    return this;
}
