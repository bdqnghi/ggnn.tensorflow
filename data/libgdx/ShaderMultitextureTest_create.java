@Override
public void create() {
    String vertexShader = "attribute vec4 a_position;   \n" + "attribute vec2 a_texCoord;   \n" + "varying vec2 v_texCoord;     \n" + "void main()                  \n" + "{                            \n" + "   gl_Position = a_position; \n" + "   v_texCoord = a_texCoord;  \n" + "}                            \n";
    String fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "varying vec2 v_texCoord;                            \n" + "uniform sampler2D s_texture;                        \n" + "uniform sampler2D s_texture2;                        \n" + "void main()                                         \n" + "{                                                   \n" + "  gl_FragColor = texture2D( s_texture, v_texCoord ) * texture2D( s_texture2, v_texCoord);\n" + "}                                                   \n";
    shader = new ShaderProgram(vertexShader, fragmentShader);
    mesh = new Mesh(true, 4, 6, new VertexAttribute(Usage.Position, 2, "a_position"), new VertexAttribute(Usage.TextureCoordinates, 2, "a_texCoord"));
    float[] vertices = { // Position 0
    -0.5f, // Position 0
    0.5f, // TexCoord 0
    0.0f, // TexCoord 0
    0.0f, // Position 1
    -0.5f, // Position 1
    -0.5f, // TexCoord 1
    0.0f, // TexCoord 1
    1.0f, // Position 2
    0.5f, // Position 2
    -0.5f, // TexCoord 2
    1.0f, // TexCoord 2
    1.0f, // Position 3
    0.5f, // Position 3
    0.5f, // TexCoord 3
    1.0f, // TexCoord 3
    0.0f };
    short[] indices = { 0, 1, 2, 0, 2, 3 };
    mesh.setVertices(vertices);
    mesh.setIndices(indices);
    createTexture();
}
