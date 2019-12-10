@Override
public Shader getShader(Renderable renderable) {
    for (Shader shader : shaders) {
        if (shader.canRender(renderable))
            return shader;
    }
    final Shader shader = createShader(renderable);
    shader.init();
    shaders.add(shader);
    return shader;
}
