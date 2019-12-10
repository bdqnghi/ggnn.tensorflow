@Override
protected void onLoaded() {
    if (currentlyLoading == null || currentlyLoading.length() == 0)
        return;
    if (loadingMaterial) {
        loadingMaterial = false;
        if (currentMaterial != null && !currentMaterial.equals(currentlyLoading))
            assets.unload(currentMaterial);
        currentMaterial = currentlyLoading;
        currentlyLoading = null;
        ModelInstance instance = instances.get(0);
        if (instance != null) {
            instance.materials.get(0).clear();
            instance.materials.get(0).set(assets.get(currentMaterial, Model.class).materials.get(0));
        }
    } else {
        if (currentModel != null && !currentModel.equals(currentlyLoading))
            assets.unload(currentModel);
        currentModel = currentlyLoading;
        currentlyLoading = null;
        instances.clear();
        animationControllers.clear();
        final ModelInstance instance = new ModelInstance(assets.get(currentModel, Model.class), transform);
        instances.add(instance);
        if (instance.animations.size > 0)
            animationControllers.put(instance, new AnimationController(instance));
        instance.calculateBoundingBox(bounds);
        cam.position.set(1, 1, 1).nor().scl(bounds.getDimensions(tmpV).len() * 0.75f).add(bounds.getCenter(tmpV));
        cam.up.set(0, 1, 0);
        cam.lookAt(inputController.target.set(bounds.getCenter(tmpV)));
        cam.far = Math.max(100f, bounds.getDimensions(tmpV).len() * 2.0f);
        cam.update();
        moveRadius = bounds.getDimensions(tmpV).len() * 0.25f;
    }
}
