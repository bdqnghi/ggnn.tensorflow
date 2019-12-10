@Override
protected Shader createShader(final Renderable renderable) {
    return new Pass2Shader(renderable, config);
}
