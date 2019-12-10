/**
 * Prepares the OpenGL state for SpriteCache rendering.
 */
public void begin() {
    if (drawing)
        throw new IllegalStateException("end must be called before begin.");
    renderCalls = 0;
    combinedMatrix.set(projectionMatrix).mul(transformMatrix);
    Gdx.gl20.glDepthMask(false);
    if (customShader != null) {
        customShader.begin();
        customShader.setUniformMatrix("u_proj", projectionMatrix);
        customShader.setUniformMatrix("u_trans", transformMatrix);
        customShader.setUniformMatrix("u_projTrans", combinedMatrix);
        customShader.setUniformi("u_texture", 0);
        mesh.bind(customShader);
    } else {
        shader.begin();
        shader.setUniformMatrix("u_projectionViewMatrix", combinedMatrix);
        shader.setUniformi("u_texture", 0);
        mesh.bind(shader);
    }
    drawing = true;
}
