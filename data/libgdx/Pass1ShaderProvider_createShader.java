@Override
protected Shader createShader(final Renderable renderable) {
    return new Pass1Shader(renderable);
}
