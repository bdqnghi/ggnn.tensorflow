@Override
public void create() {
    String vertexShader = "attribute vec4 vPosition;    \n" + "void main()                  \n" + "{                            \n" + "   gl_Position = vPosition;  \n" + "}                            \n";
    String fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "void main()                                  \n" + "{                                            \n" + "  gl_FragColor = vec4 ( 1.0, 1.0, 1.0, 1.0 );\n" + "}";
    shader = new ShaderProgram(vertexShader, fragmentShader);
    mesh = new Mesh(true, 3, 0, new VertexAttribute(Usage.Position, 3, "vPosition"));
    float[] vertices = { 0.0f, 0.5f, 0.0f, -0.5f, -0.5f, 0.0f, 0.5f, -0.5f, 0.0f };
    mesh.setVertices(vertices);
}
