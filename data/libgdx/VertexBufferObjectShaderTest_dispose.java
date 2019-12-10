@Override
public void dispose() {
    texture.dispose();
    vbo.dispose();
    indices.dispose();
    shader.dispose();
}
