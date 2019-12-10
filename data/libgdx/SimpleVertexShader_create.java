@Override
public void create() {
    // @off
    String vertexShader = "uniform mat4 u_mvpMatrix;                   \n" + "attribute vec4 a_position;                  \n" + "void main()                                 \n" + "{                                           \n" + "   gl_Position = u_mvpMatrix * a_position;  \n" + "}                            \n";
    String fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "void main()                                  \n" + "{                                            \n" + "  gl_FragColor = vec4 ( 1.0, 0.0, 0.0, 1.0 );\n" + "}";
    // @on
    shader = new ShaderProgram(vertexShader, fragmentShader);
    mesh = Shapes.genCube();
    mesh.getVertexAttribute(Usage.Position).alias = "a_position";
}
