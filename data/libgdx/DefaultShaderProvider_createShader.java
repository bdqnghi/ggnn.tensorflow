@Override
protected Shader createShader(final Renderable renderable) {
    return new DefaultShader(renderable, config);
}
