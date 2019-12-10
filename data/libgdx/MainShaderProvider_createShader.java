@Override
protected Shader createShader(final Renderable renderable) {
    return new MainShader(renderable, config);
}
