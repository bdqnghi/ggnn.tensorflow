private Shader getShader(Renderable renderable) {
    Shader shader = useGPU ? new ParticleShader(renderable, new ParticleShader.Config(mode)) : new DefaultShader(renderable);
    shader.init();
    return shader;
}
