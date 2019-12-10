/**
 * Initializes the batch with the given amount of decal objects the buffer is able to hold when full.
 *
 * @param size Maximum size of decal objects to hold in memory
 */
public void initialize(int size) {
    vertices = new float[size * Decal.SIZE];
    Mesh.VertexDataType vertexDataType = Mesh.VertexDataType.VertexArray;
    if (Gdx.gl30 != null) {
        vertexDataType = Mesh.VertexDataType.VertexBufferObjectWithVAO;
    }
    mesh = new Mesh(vertexDataType, false, size * 4, size * 6, new VertexAttribute(VertexAttributes.Usage.Position, 3, ShaderProgram.POSITION_ATTRIBUTE), new VertexAttribute(VertexAttributes.Usage.ColorPacked, 4, ShaderProgram.COLOR_ATTRIBUTE), new VertexAttribute(VertexAttributes.Usage.TextureCoordinates, 2, ShaderProgram.TEXCOORD_ATTRIBUTE + "0"));
    short[] indices = new short[size * 6];
    int v = 0;
    for (int i = 0; i < indices.length; i += 6, v += 4) {
        indices[i] = (short) (v);
        indices[i + 1] = (short) (v + 2);
        indices[i + 2] = (short) (v + 1);
        indices[i + 3] = (short) (v + 1);
        indices[i + 4] = (short) (v + 2);
        indices[i + 5] = (short) (v + 3);
    }
    mesh.setIndices(indices);
}
