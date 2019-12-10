public void render() {
    Gdx.gl20.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl20.glClear(GL20.GL_COLOR_BUFFER_BIT);
    fb.begin();
    fbshader.begin();
    fbshader.setUniformf("u_viewport", fb.getWidth(), fb.getHeight());
    fbshader.setUniformf("u_color", 0.0f, 1.0f, 0.0f);
    quad.render(fbshader, GL20.GL_TRIANGLES);
    fbshader.end();
    fb.end();
    ffb.begin();
    fbshader.begin();
    fbshader.setUniformf("u_viewport", ffb.getWidth(), ffb.getHeight());
    fbshader.setUniformf("u_color", 1.0f, 0.0f, 0.0f);
    quad.render(fbshader, GL20.GL_TRIANGLES);
    fbshader.end();
    ffb.end();
    shader.begin();
    fb.getColorBufferTexture().bind(0);
    ffb.getColorBufferTexture().bind(1);
    shader.setUniformMatrix("u_worldView", screenCamera.combined);
    shader.setUniformi("u_fbtex", 0);
    shader.setUniformi("u_ffbtex", 1);
    screenQuad.render(shader, GL20.GL_TRIANGLES);
    shader.end();
}
