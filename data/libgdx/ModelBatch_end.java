/**
 * End rendering one or more {@link Renderable}s. Must be called after a call to {@link #begin(Camera)}. This will flush the
 * batch, causing any renderables provided using one of the render() methods to be rendered. After a call to this method the
 * OpenGL context can be altered again.
 */
public void end() {
    flush();
    if (ownContext)
        context.end();
    camera = null;
}
