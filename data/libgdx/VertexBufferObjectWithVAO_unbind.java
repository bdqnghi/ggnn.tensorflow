@Override
public void unbind(final ShaderProgram shader, final int[] locations) {
    GL30 gl = Gdx.gl30;
    gl.glBindVertexArray(0);
    isBound = false;
}
