/**
 * Convenience method to create a model with a single node containing a box shape. The resources the Material might contain are
 * not managed, use {@link Model#manageDisposable(Disposable)} to add those to the model.
 * @param attributes bitwise mask of the {@link com.badlogic.gdx.graphics.VertexAttributes.Usage}, only Position, Color, Normal
 *           and TextureCoordinates is supported.
 */
public Model createBox(float width, float height, float depth, int primitiveType, final Material material, final long attributes) {
    begin();
    part("box", primitiveType, attributes, material).box(width, height, depth);
    return end();
}
