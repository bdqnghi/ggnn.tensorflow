/**
 * Convenience method to create a model with a single node containing a cone shape. The resources the Material might contain
 * are not managed, use {@link Model#manageDisposable(Disposable)} to add those to the model.
 * @param attributes bitwise mask of the {@link com.badlogic.gdx.graphics.VertexAttributes.Usage}, only Position, Color, Normal
 *           and TextureCoordinates is supported.
 */
public Model createCone(float width, float height, float depth, int divisions, int primitiveType, final Material material, final long attributes, float angleFrom, float angleTo) {
    begin();
    part("cone", primitiveType, attributes, material).cone(width, height, depth, divisions, angleFrom, angleTo);
    return end();
}
