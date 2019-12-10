protected void renderWorld() {
    if (shadows) {
        ((DirectionalShadowLight) light).begin(Vector3.Zero, camera.direction);
        shadowBatch.begin(((DirectionalShadowLight) light).getCamera());
        world.render(shadowBatch, null);
        shadowBatch.end();
        ((DirectionalShadowLight) light).end();
    }
    modelBatch.begin(camera);
    world.render(modelBatch, environment);
    modelBatch.end();
}
