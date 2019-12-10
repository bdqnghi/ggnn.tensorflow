@Override
public void create() {
    String vertexShader = "attribute vec4 a_position;    \n" + "attribute vec4 a_color;\n" + "attribute vec2 a_texCoords;\n" + "varying vec4 v_color;" + "varying vec2 v_texCoords;" + "void main()                  \n" + "{                            \n" + "   v_color = vec4(a_color.x, a_color.y, a_color.z, 1); \n" + "   v_texCoords = a_texCoords; \n" + "   gl_Position =  a_position;  \n" + "}                            \n";
    String fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "varying vec4 v_color;\n" + "varying vec2 v_texCoords;\n" + "uniform sampler2D u_texture;\n" + "void main()                                  \n" + "{                                            \n" + "  gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n" + "}";
    shader = new ShaderProgram(vertexShader, fragmentShader);
    vbo = new VertexBufferObject(true, 3, new VertexAttribute(VertexAttributes.Usage.Position, 2, "a_position"), new VertexAttribute(VertexAttributes.Usage.TextureCoordinates, 2, "a_texCoords"), new VertexAttribute(VertexAttributes.Usage.ColorPacked, 4, "a_color"));
    float[] vertices = new float[] { -1, -1, 0, 0, Color.toFloatBits(1f, 0f, 0f, 1f), 0, 1, 0.5f, 1.0f, Color.toFloatBits(0f, 1f, 0f, 1f), 1, -1, 1, 0, Color.toFloatBits(0f, 0f, 1f, 1f) };
    vbo.setVertices(vertices, 0, vertices.length);
    ibo = new IndexBufferObject(true, 3);
    ibo.setIndices(new short[] { 0, 1, 2 }, 0, 3);
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
}
