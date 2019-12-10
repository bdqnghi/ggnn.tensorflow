protected <T extends RenderableProvider> void getRenderables(Iterable<T> renderableProviders) {
    for (RenderableProvider renderableProvider : renderableProviders) {
        renderableProvider.getRenderables(renderables, renderablesPool);
    }
}
