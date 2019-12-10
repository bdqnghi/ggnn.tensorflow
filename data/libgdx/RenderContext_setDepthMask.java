public void setDepthMask(final boolean depthMask) {
    if (this.depthMask != depthMask)
        Gdx.gl.glDepthMask(this.depthMask = depthMask);
}
