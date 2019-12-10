@Override
protected void renderWorld() {
    if (world.performanceCounter != null)
        world.performanceCounter.start();
    if (USE_BULLET_FRUSTUM_CULLING)
        getEntitiesCollidingWithObject(world, frustumObject, visibleEntities, tempManifoldArr);
    else {
        visibleEntities.clear();
        for (int i = 0; i < world.entities.size; i++) {
            final BulletEntity e = world.entities.get(i);
            if (e == frustumEntity)
                continue;
            e.modelInstance.transform.getTranslation(tmpV);
            if (frustumCam.frustum.sphereInFrustum(tmpV, 1))
                visibleEntities.add(e);
        }
    }
    if (world.performanceCounter != null)
        world.performanceCounter.stop();
    for (int i = 0; i < visibleEntities.size; i++) visibleEntities.get(i).setColor(Color.RED);
    modelBatch.begin(camera);
    if ((state & CULL_FRUSTUM) == CULL_FRUSTUM) {
        world.render(modelBatch, environment, visibleEntities);
        world.render(modelBatch, environment, frustumEntity);
    } else
        world.render(modelBatch, environment);
    modelBatch.end();
    for (int i = 0; i < visibleEntities.size; i++) visibleEntities.get(i).setColor(Color.GRAY);
}
