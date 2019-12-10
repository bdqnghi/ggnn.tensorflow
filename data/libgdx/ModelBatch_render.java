/**
 * Calls {@link RenderableProvider#getRenderables(Array, Pool)} and adds all returned {@link Renderable} instances to the
 * current batch to be rendered. Any environment set on the returned renderables will be replaced with the given environment.
 * Any shaders set on the returned renderables will be replaced with the given {@link Shader}. Can only be called after a call
 * to {@link #begin(Camera)} and before a call to {@link #end()}.
 * @param renderableProviders one or more renderable providers
 * @param environment the {@link Environment} to use for the renderables
 * @param shader the shader to use for the renderables
 */
public <T extends RenderableProvider> void render(final Iterable<T> renderableProviders, final Environment environment, final Shader shader) {
    for (final RenderableProvider renderableProvider : renderableProviders) render(renderableProvider, environment, shader);
}
