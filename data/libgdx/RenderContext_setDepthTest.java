public void setDepthTest(final int depthFunction, final float depthRangeNear, final float depthRangeFar) {
    final boolean wasEnabled = depthFunc != 0;
    final boolean enabled = depthFunction != 0;
    if (depthFunc != depthFunction) {
        depthFunc = depthFunction;
        if (enabled) {
            Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
            Gdx.gl.glDepthFunc(depthFunction);
        } else
            Gdx.gl.glDisable(GL20.GL_DEPTH_TEST);
    }
    if (enabled) {
        if (!wasEnabled || depthFunc != depthFunction)
            Gdx.gl.glDepthFunc(depthFunc = depthFunction);
        if (!wasEnabled || this.depthRangeNear != depthRangeNear || this.depthRangeFar != depthRangeFar)
            Gdx.gl.glDepthRangef(this.depthRangeNear = depthRangeNear, this.depthRangeFar = depthRangeFar);
    }
}
