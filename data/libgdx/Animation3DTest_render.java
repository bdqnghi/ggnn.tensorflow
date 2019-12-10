@Override
protected void render(ModelBatch batch, Array<ModelInstance> instances) {
    batch.render(instances, lights);
    if (skydome != null)
        batch.render(skydome);
}
