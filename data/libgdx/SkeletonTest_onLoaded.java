@Override
protected void onLoaded() {
    if (currentlyLoading == null || currentlyLoading.isEmpty())
        return;
    instances.clear();
    animationControllers.clear();
    final ModelInstance instance = new ModelInstance(assets.get(currentlyLoading, Model.class));
    for (Material m : instance.materials) m.set(new BlendingAttribute(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA, 0.8f));
    instances.add(instance);
    if (instance.animations.size > 0)
        animationControllers.put(instance, new AnimationController(instance));
    currentlyLoading = null;
}
