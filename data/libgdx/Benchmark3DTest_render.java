@Override
protected void render(ModelBatch batch, Array<ModelInstance> instances) {
    if (lighting) {
        batch.render(instances, environment);
    } else {
        batch.render(instances);
    }
}
