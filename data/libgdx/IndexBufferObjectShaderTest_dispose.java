@Override
public void dispose() {
    texture.dispose();
    shader.dispose();
    vbo.dispose();
    ibo.dispose();
}
