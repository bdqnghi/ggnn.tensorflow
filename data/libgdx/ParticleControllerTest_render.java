@Override
protected void render(ModelBatch batch, Array<ModelInstance> instances) {
    if (emitters.size > 0) {
        // Update
        float delta = Gdx.graphics.getDeltaTime();
        builder.delete(0, builder.length());
        builder.append(Gdx.graphics.getFramesPerSecond());
        fpsLabel.setText(builder);
        ui.act(delta);
        billboardParticleBatch.begin();
        for (ParticleController controller : emitters) {
            controller.update();
            controller.draw();
        }
        billboardParticleBatch.end();
        batch.render(billboardParticleBatch, environment);
    }
    batch.render(instances, environment);
    ui.draw();
}
