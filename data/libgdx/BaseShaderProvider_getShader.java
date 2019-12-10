@Override
public Shader getShader(Renderable renderable) {
    Shader suggestedShader = renderable.shader;
    if (suggestedShader != null && suggestedShader.canRender(renderable))
        return suggestedShader;
    for (Shader shader : shaders) {
        if (shader.canRender(renderable))
            return shader;
    }
    final Shader shader = createShader(renderable);
    shader.init();
    shaders.add(shader);
    return shader;
}
