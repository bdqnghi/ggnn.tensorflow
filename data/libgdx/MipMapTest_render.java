@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_TEXTURE_2D);
    camera.update();
    currTexture = hwMipMap.isChecked() ? textureHW : textureSW;
    currTexture.bind();
    currTexture.setFilter(TextureFilter.valueOf(minFilter.getSelected()), TextureFilter.valueOf(magFilter.getSelected()));
    shader.begin();
    shader.setUniformMatrix("u_projTrans", camera.combined);
    shader.setUniformi("s_texture", 0);
    mesh.render(shader, GL20.GL_TRIANGLE_FAN);
    shader.end();
    ui.act();
    ui.draw();
}
