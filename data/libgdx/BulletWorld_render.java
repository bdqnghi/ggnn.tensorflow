@Override
public void render(ModelBatch batch, Environment lights, Iterable<BulletEntity> entities) {
    if (renderMeshes)
        super.render(batch, lights, entities);
    if (debugDrawer != null && debugDrawer.getDebugMode() > 0) {
        batch.flush();
        debugDrawer.begin(batch.getCamera());
        collisionWorld.debugDrawWorld();
        debugDrawer.end();
    }
}
