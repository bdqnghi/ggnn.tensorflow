/**
 * Convenience method to create a model with an arrow. The resources the Material might contain are not managed, use
 * {@link Model#manageDisposable(Disposable)} to add those to the model.
 */
public Model createArrow(Vector3 from, Vector3 to, Material material, long attributes) {
    return createArrow(from.x, from.y, from.z, to.x, to.y, to.z, 0.1f, 0.1f, 5, GL20.GL_TRIANGLES, material, attributes);
}
