/**
 * Creates a new MeshPart within the current Node and returns a {@link MeshPartBuilder} which can be used to build the shape of
 * the part. If possible a previously used {@link MeshPartBuilder} will be reused, to reduce the number of mesh binds.
 * Therefore you can only build one part at a time. The resources the Material might contain are not managed, use
 * {@link #manage(Disposable)} to add those to the model.
 * @param attributes bitwise mask of the {@link com.badlogic.gdx.graphics.VertexAttributes.Usage}, only Position, Color, Normal
 *           and TextureCoordinates is supported.
 * @return The {@link MeshPartBuilder} you can use to build the MeshPart.
 */
public MeshPartBuilder part(final String id, int primitiveType, final long attributes, final Material material) {
    return part(id, primitiveType, MeshBuilder.createAttributes(attributes), material);
}
