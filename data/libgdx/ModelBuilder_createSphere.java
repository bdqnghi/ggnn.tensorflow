/**
 * Convenience method to create a model with a single node containing a sphere shape. The resources the Material might contain
 * are not managed, use {@link Model#manageDisposable(Disposable)} to add those to the model.
 * @param attributes bitwise mask of the {@link com.badlogic.gdx.graphics.VertexAttributes.Usage}, only Position, Color, Normal
 *           and TextureCoordinates is supported.
 */
public Model createSphere(float width, float height, float depth, int divisionsU, int divisionsV, int primitiveType, final Material material, final long attributes, float angleUFrom, float angleUTo, float angleVFrom, float angleVTo) {
    begin();
    part("cylinder", primitiveType, attributes, material).sphere(width, height, depth, divisionsU, divisionsV, angleUFrom, angleUTo, angleVFrom, angleVTo);
    return end();
}
