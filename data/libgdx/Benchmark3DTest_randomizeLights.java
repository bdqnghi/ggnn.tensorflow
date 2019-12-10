protected void randomizeLights() {
    int pointLights = MathUtils.random(5);
    int directionalLights = MathUtils.random(5);
    DefaultShader.Config config = new Config();
    config.numDirectionalLights = directionalLights;
    config.numPointLights = pointLights;
    config.numSpotLights = 0;
    modelBatch.dispose();
    modelBatch = new ModelBatch(new DefaultShaderProvider(config));
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.4f, 0.4f, 0.4f, 1.f));
    for (int i = 0; i < pointLights; i++) {
        environment.add(new PointLight().set(randomColor(), randomPosition(), MathUtils.random(10f)));
    }
    for (int i = 0; i < directionalLights; i++) {
        environment.add(new DirectionalLight().set(randomColor(), randomPosition()));
    }
}
