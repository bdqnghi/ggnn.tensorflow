protected void init2() {
    frameBuffers[SECOND_PASS] = new FrameBuffer(Pixmap.Format.RGBA8888, Gdx.graphics.getWidth(), Gdx.graphics.getHeight(), true);
    passShaderProviders[SECOND_PASS] = new Pass2ShaderProvider(new Pass2Shader.Config(this));
}
