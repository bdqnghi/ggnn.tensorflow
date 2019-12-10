@Override
public void dispose() {
    world.dispose();
    world = null;
    for (Disposable disposable : disposables) disposable.dispose();
    disposables.clear();
    modelBatch.dispose();
    modelBatch = null;
    shadowBatch.dispose();
    shadowBatch = null;
    if (shadows)
        ((DirectionalShadowLight) light).dispose();
    light = null;
    super.dispose();
}
