@Override
public void dispose() {
    for (Shader shader : shaders) {
        shader.dispose();
    }
    shaders.clear();
}
