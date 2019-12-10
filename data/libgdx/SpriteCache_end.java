/**
 * Completes rendering for this SpriteCache.
 */
public void end() {
    if (!drawing)
        throw new IllegalStateException("begin must be called before end.");
    drawing = false;
    shader.end();
    GL20 gl = Gdx.gl20;
    gl.glDepthMask(true);
    if (customShader != null)
        mesh.unbind(customShader);
    else
        mesh.unbind(shader);
}
