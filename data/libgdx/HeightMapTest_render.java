@Override
protected void render(ModelBatch batch, Array<ModelInstance> instances) {
    batch.render(instances);
    batch.render(ground);
}
