/**
 * Checks whether the {@link RenderContext} returned by {@link #getRenderContext()} is owned and managed by this ModelBatch.
 * When the RenderContext isn't owned by the ModelBatch, you are responsible for calling the {@link RenderContext#begin()} and
 * {@link RenderContext#end()} methods yourself, as well as disposing the RenderContext.
 * @return True if this ModelBatch owns the RenderContext, false otherwise.
 */
public boolean ownsRenderContext() {
    return ownContext;
}
