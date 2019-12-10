/**
 * Convenience method to create a model with a single node containing a capsule shape. The resources the Material might contain
 * are not managed, use {@link Model#manageDisposable(Disposable)} to add those to the model.
 * @param attributes bitwise mask of the {@link com.badlogic.gdx.graphics.VertexAttributes.Usage}, only Position, Color, Normal
 *           and TextureCoordinates is supported.
 */
public Model createCapsule(float radius, float height, int divisions, int primitiveType, final Material material, final long attributes) {
    begin();
    part("capsule", primitiveType, attributes, material).capsule(radius, height, divisions);
    return end();
}
