public void setBlending(final boolean enabled, final int sFactor, final int dFactor) {
    if (enabled != blending) {
        blending = enabled;
        if (enabled)
            Gdx.gl.glEnable(GL20.GL_BLEND);
        else
            Gdx.gl.glDisable(GL20.GL_BLEND);
    }
    if (enabled && (blendSFactor != sFactor || blendDFactor != dFactor)) {
        Gdx.gl.glBlendFunc(sFactor, dFactor);
        blendSFactor = sFactor;
        blendDFactor = dFactor;
    }
}
