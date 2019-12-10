private void clearRenderablesPool() {
    renderablePool.freeAll(renderables);
    for (int i = 0, free = renderablePool.getFree(); i < free; ++i) {
        Renderable renderable = renderablePool.obtain();
        renderable.meshPart.mesh.dispose();
    }
    renderables.clear();
}
