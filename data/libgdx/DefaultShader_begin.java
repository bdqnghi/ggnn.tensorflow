@Override
public void begin(final Camera camera, final RenderContext context) {
    super.begin(camera, context);
    for (final DirectionalLight dirLight : directionalLights) dirLight.set(0, 0, 0, 0, -1, 0);
    for (final PointLight pointLight : pointLights) pointLight.set(0, 0, 0, 0, 0, 0, 0);
    for (final SpotLight spotLight : spotLights) spotLight.set(0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0);
    lightsSet = false;
    if (has(u_time))
        set(u_time, time += Gdx.graphics.getDeltaTime());
}
