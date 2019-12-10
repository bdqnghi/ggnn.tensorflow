@Override
protected Shader createShader(final Renderable renderable) {
    return new DepthShader(renderable, config);
}
