/**
 * Adds the specified {@link RenderableProvider}s to the cache, see {@link #add(Renderable)}.
 */
public <T extends RenderableProvider> void add(final Iterable<T> renderableProviders) {
    for (final RenderableProvider renderableProvider : renderableProviders) add(renderableProvider);
}
