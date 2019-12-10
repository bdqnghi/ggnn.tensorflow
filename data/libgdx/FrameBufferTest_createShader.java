private void createShader(Graphics graphics) {
    String vertexShader = "attribute vec4 a_Position;    \n" + "attribute vec4 a_Color;\n" + "attribute vec2 a_texCoords;\n" + "varying vec4 v_Color;" + "varying vec2 v_texCoords; \n" + "void main()                  \n" + "{                            \n" + "   v_Color = a_Color;" + "   v_texCoords = a_texCoords;\n" + "   gl_Position =   a_Position;  \n" + "}                            \n";
    String fragmentShader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n" + "varying vec4 v_Color;\n" + "varying vec2 v_texCoords; \n" + "uniform sampler2D u_texture;\n" + "void main()                                  \n" + "{                                            \n" + "  gl_FragColor = v_Color * texture2D(u_texture, v_texCoords);\n" + "}";
    meshShader = new ShaderProgram(vertexShader, fragmentShader);
    if (meshShader.isCompiled() == false)
        throw new IllegalStateException(meshShader.getLog());
}
