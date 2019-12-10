@Override
protected void render(ModelBatch batch, Array<ModelInstance> instances) {
    if (cacheCheckBox.isChecked()) {
        modelCache.begin();
        modelCache.add(instances);
        modelCache.end();
        batch.render(modelCache, lighting ? environment : null);
    } else {
        batch.render(instances, lighting ? environment : null);
    }
}
