/**
 * Flushes the batch, causing all {@link Renderable}s in the batch to be rendered. Can only be called after the call to
 * {@link #begin(Camera)} and before the call to {@link #end()}.
 */
public void flush() {
    sorter.sort(camera, renderables);
    Shader currentShader = null;
    for (int i = 0; i < renderables.size; i++) {
        final Renderable renderable = renderables.get(i);
        if (currentShader != renderable.shader) {
            if (currentShader != null)
                currentShader.end();
            currentShader = renderable.shader;
            currentShader.begin(camera, context);
        }
        currentShader.render(renderable);
    }
    if (currentShader != null)
        currentShader.end();
    renderablesPool.flush();
    renderables.clear();
}
