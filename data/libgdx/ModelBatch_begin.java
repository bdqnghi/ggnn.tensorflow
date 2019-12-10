/**
 * Start rendering one or more {@link Renderable}s. Use one of the render() methods to provide the renderables. Must be
 * followed by a call to {@link #end()}. The OpenGL context must not be altered between {@link #begin(Camera)} and
 * {@link #end()}.
 * @param cam The {@link Camera} to be used when rendering and sorting.
 */
public void begin(final Camera cam) {
    if (camera != null)
        throw new GdxRuntimeException("Call end() first.");
    camera = cam;
    if (ownContext)
        context.begin();
}
