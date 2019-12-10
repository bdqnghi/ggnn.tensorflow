/**
 * Disposes all resources associated with this shader. Must be called when the shader is no longer used.
 */
public void dispose() {
    GL20 gl = Gdx.gl20;
    gl.glUseProgram(0);
    gl.glDeleteShader(vertexShaderHandle);
    gl.glDeleteShader(fragmentShaderHandle);
    gl.glDeleteProgram(program);
    if (shaders.get(Gdx.app) != null)
        shaders.get(Gdx.app).removeValue(this, true);
}
