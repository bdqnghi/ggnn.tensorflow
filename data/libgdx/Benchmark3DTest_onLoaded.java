@Override
protected void onLoaded() {
    if (currentlyLoading == null || currentlyLoading.length() == 0)
        return;
    final ModelInstance instance = new ModelInstance(assets.get(currentlyLoading, Model.class));
    instance.transform = new Matrix4().idt();
    instance.transform.setToTranslation(MathUtils.random(-10, 10), MathUtils.random(-10, 10), MathUtils.random(-10, 10));
    instance.transform.rotate(Vector3.X, MathUtils.random(-180, 180));
    instance.transform.rotate(Vector3.Y, MathUtils.random(-180, 180));
    instance.transform.rotate(Vector3.Z, MathUtils.random(-180, 180));
    instances.add(instance);
}
