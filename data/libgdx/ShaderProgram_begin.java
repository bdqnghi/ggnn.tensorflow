/**
 * Makes OpenGL ES 2.0 use this vertex and fragment shader pair. When you are done with this shader you have to call
 * {@link ShaderProgram#end()}.
 */
public void begin() {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glUseProgram(program);
}
