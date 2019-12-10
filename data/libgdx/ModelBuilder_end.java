/**
 * End building the model.
 * @return The newly created model. Call the {@link Model#dispose()} method when no longer used.
 */
public Model end() {
    if (model == null)
        throw new GdxRuntimeException("Call begin() first");
    final Model result = model;
    endnode();
    model = null;
    for (final MeshBuilder mb : builders) mb.end();
    builders.clear();
    rebuildReferences(result);
    return result;
}
