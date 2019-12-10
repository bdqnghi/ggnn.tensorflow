// TODO: Move responsibility for combining attributes to RenderableProvider
private static final Attributes combineAttributes(final Renderable renderable) {
    tmpAttributes.clear();
    if (renderable.environment != null)
        tmpAttributes.set(renderable.environment);
    if (renderable.material != null)
        tmpAttributes.set(renderable.material);
    return tmpAttributes;
}
