@Override
public void render(Array<ModelInstance> instances) {
    dirLight.direction.rotate(dirLightRotAxis, Gdx.graphics.getDeltaTime() * 45f);
    super.render(null);
    for (ObjectMap.Entry<ModelInstance, AnimationController> e : animationControllers.entries()) e.value.update(Gdx.graphics.getDeltaTime());
    shaderBatch.begin(cam);
    shaderBatch.render(instances, environment);
    shaderBatch.end();
}
