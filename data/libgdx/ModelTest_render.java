@Override
protected void render(ModelBatch batch, Array<ModelInstance> instances) {
    for (ObjectMap.Entry<ModelInstance, AnimationController> e : animationControllers.entries()) e.value.update(Gdx.graphics.getDeltaTime());
    batch.render(instances, environment);
}
