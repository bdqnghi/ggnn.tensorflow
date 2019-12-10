@Override
protected void onLoaded() {
    if (currentlyLoading == null || currentlyLoading.length() == 0)
        return;
    instances.clear();
    animationControllers.clear();
    final ModelInstance instance = new ModelInstance(assets.get(currentlyLoading, Model.class));
    instance.transform = transform;
    instances.add(instance);
    if (instance.animations.size > 0)
        animationControllers.put(instance, new AnimationController(instance));
    currentlyLoading = null;
    instance.calculateBoundingBox(bounds);
    cam.position.set(1, 1, 1).nor().scl(bounds.getDimensions(tmpV1).len() * 0.75f + bounds.getCenter(tmpV2).len());
    cam.up.set(0, 1, 0);
    cam.lookAt(0, 0, 0);
    cam.far = 50f + bounds.getDimensions(tmpV1).len() * 2.0f;
    cam.update();
}
