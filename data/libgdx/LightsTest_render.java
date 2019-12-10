@Override
protected void render(ModelBatch batch, Array<ModelInstance> instances) {
    final float delta = Gdx.graphics.getDeltaTime();
    dirLight.direction.rotate(Vector3.X, delta * 45f);
    dirLight.direction.rotate(Vector3.Y, delta * 25f);
    dirLight.direction.rotate(Vector3.Z, delta * 33f);
    pointLight.position.sub(transformedCenter);
    pointLight.position.rotate(Vector3.X, delta * 50f);
    pointLight.position.rotate(Vector3.Y, delta * 13f);
    pointLight.position.rotate(Vector3.Z, delta * 3f);
    pointLight.position.add(transformedCenter.set(center).mul(transform));
    pLight.worldTransform.setTranslation(pointLight.position);
    batch.render(pLight);
    super.render(batch, instances);
}
