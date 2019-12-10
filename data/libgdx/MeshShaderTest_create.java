@Override
public void create() {
    String vertexShader = "attribute vec4 a_position;    \n" + "attribute vec4 a_color;\n" + "attribute vec2 a_texCoord0;\n" + "uniform mat4 u_worldView;\n" + "varying vec4 v_color;" + "varying vec2 v_texCoords;" + "void main()                  \n" + "{                            \n" + "   v_color = vec4(1, 1, 1, 1); \n" + "   v_texCoords = a_texCoord0; \n" + "   gl_Position =  u_worldView * a_position;  \n" + "}                            \n";
    String fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "varying vec4 v_color;\n" + "varying vec2 v_texCoords;\n" + "uniform sampler2D u_texture;\n" + "void main()                                  \n" + "{                                            \n" + "  gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n" + "}";
    shader = new ShaderProgram(vertexShader, fragmentShader);
    if (shader.isCompiled() == false) {
        Gdx.app.log("ShaderTest", shader.getLog());
        Gdx.app.exit();
    }
    mesh = new Mesh(true, 4, 6, VertexAttribute.Position(), VertexAttribute.ColorUnpacked(), VertexAttribute.TexCoords(0));
    mesh.setVertices(new float[] { -0.5f, -0.5f, 0, 1, 1, 1, 1, 0, 1, 0.5f, -0.5f, 0, 1, 1, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1, 1, 1, 1, 1, 0, -0.5f, 0.5f, 0, 1, 1, 1, 1, 0, 0 });
    mesh.setIndices(new short[] { 0, 1, 2, 2, 3, 0 });
    texture = new Texture(Gdx.files.internal("data/bobrgb888-32x32.png"));
}
