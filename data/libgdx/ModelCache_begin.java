/**
 * Begin creating the cache, must be followed by a call to {@link #end()}, in between these calls one or more calls to one of
 * the add(...) methods can be made. Calling this method will clear the cache and prepare it for creating a new cache. The
 * cache is not valid until the call to {@link #end()} is made. Use one of the add methods (e.g. {@link #add(Renderable)} or
 * {@link #add(RenderableProvider)}) to add renderables to the cache.
 * @param camera The {@link Camera} that will passed to the {@link RenderableSorter}
 */
public void begin(Camera camera) {
    if (building)
        throw new GdxRuntimeException("Call end() after calling begin()");
    building = true;
    this.camera = camera;
    renderablesPool.flush();
    renderables.clear();
    items.clear();
    meshPartPool.flush();
    meshPool.flush();
}
