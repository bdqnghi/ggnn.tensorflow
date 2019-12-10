@Override
public void dispose() {
    mesh.dispose();
    texture.dispose();
    frameBuffer.dispose();
    stencilFrameBuffer.dispose();
    stencilMesh.dispose();
    spriteBatch.dispose();
    meshShader.dispose();
}
