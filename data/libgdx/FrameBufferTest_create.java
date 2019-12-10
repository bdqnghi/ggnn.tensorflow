@Override
public void create() {
    mesh = new Mesh(true, 3, 0, new VertexAttribute(Usage.Position, 3, "a_Position"), new VertexAttribute(Usage.ColorPacked, 4, "a_Color"), new VertexAttribute(Usage.TextureCoordinates, 2, "a_texCoords"));
    float c1 = Color.toFloatBits(255, 0, 0, 255);
    float c2 = Color.toFloatBits(255, 0, 0, 255);
    float c3 = Color.toFloatBits(0, 0, 255, 255);
    mesh.setVertices(new float[] { -0.5f, -0.5f, 0, c1, 0, 0, 0.5f, -0.5f, 0, c2, 1, 0, 0, 0.5f, 0, c3, 0.5f, 1 });
    stencilMesh = new Mesh(true, 3, 0, new VertexAttribute(Usage.Position, 3, "a_Position"), new VertexAttribute(Usage.ColorPacked, 4, "a_Color"), new VertexAttribute(Usage.TextureCoordinates, 2, "a_texCoords"));
    stencilMesh.setVertices(new float[] { -0.5f, 0.5f, 0, c1, 0, 0, 0.5f, 0.5f, 0, c2, 1, 0, 0, -0.5f, 0, c3, 0.5f, 1 });
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    spriteBatch = new SpriteBatch();
    frameBuffer = new FrameBuffer(Format.RGB565, 128, 128, false);
    stencilFrameBuffer = new FrameBuffer(Format.RGB565, 128, 128, false, true);
    createShader(Gdx.graphics);
}
