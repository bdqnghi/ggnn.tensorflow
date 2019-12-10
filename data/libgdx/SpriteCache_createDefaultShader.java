static ShaderProgram createDefaultShader() {
    String vertexShader = // 
    "attribute vec4 " + ShaderProgram.POSITION_ATTRIBUTE + ";\n" + "attribute vec4 " + ShaderProgram.COLOR_ATTRIBUTE + // 
    ";\n" + "attribute vec2 " + ShaderProgram.TEXCOORD_ATTRIBUTE + // 
    "0;\n" + // 
    "uniform mat4 u_projectionViewMatrix;\n" + // 
    "varying vec4 v_color;\n" + // 
    "varying vec2 v_texCoords;\n" + // 
    "\n" + // 
    "void main()\n" + // 
    "{\n" + "   v_color = " + ShaderProgram.COLOR_ATTRIBUTE + // 
    ";\n" + // 
    "   v_color.a = v_color.a * (255.0/254.0);\n" + "   v_texCoords = " + ShaderProgram.TEXCOORD_ATTRIBUTE + // 
    "0;\n" + "   gl_Position =  u_projectionViewMatrix * " + ShaderProgram.POSITION_ATTRIBUTE + // 
    ";\n" + "}\n";
    String fragmentShader = // 
    "#ifdef GL_ES\n" + // 
    "precision mediump float;\n" + // 
    "#endif\n" + // 
    "varying vec4 v_color;\n" + // 
    "varying vec2 v_texCoords;\n" + // 
    "uniform sampler2D u_texture;\n" + // 
    "void main()\n" + // 
    "{\n" + // 
    "  gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n" + "}";
    ShaderProgram shader = new ShaderProgram(vertexShader, fragmentShader);
    if (shader.isCompiled() == false)
        throw new IllegalArgumentException("Error compiling shader: " + shader.getLog());
    return shader;
}
