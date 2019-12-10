/**
 * Disables this shader. Must be called when one is done with the shader. Don't mix it with dispose, that will release the
 * shader resources.
 */
public void end() {
    GL20 gl = Gdx.gl20;
    gl.glUseProgram(0);
}
