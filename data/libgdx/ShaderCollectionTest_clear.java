public void clear() {
    for (final Shader shader : shaders) shader.dispose();
    shaders.clear();
}
