static private String createVertexShader(boolean hasNormals, boolean hasColors, int numTexCoords) {
    String shader = "attribute vec4 " + ShaderProgram.POSITION_ATTRIBUTE + ";\n" + (hasNormals ? "attribute vec3 " + ShaderProgram.NORMAL_ATTRIBUTE + ";\n" : "") + (hasColors ? "attribute vec4 " + ShaderProgram.COLOR_ATTRIBUTE + ";\n" : "");
    for (int i = 0; i < numTexCoords; i++) {
        shader += "attribute vec2 " + ShaderProgram.TEXCOORD_ATTRIBUTE + i + ";\n";
    }
    shader += "uniform mat4 u_projModelView;\n";
    shader += (hasColors ? "varying vec4 v_col;\n" : "");
    for (int i = 0; i < numTexCoords; i++) {
        shader += "varying vec2 v_tex" + i + ";\n";
    }
    shader += "void main() {\n" + "   gl_Position = u_projModelView * " + ShaderProgram.POSITION_ATTRIBUTE + ";\n" + (hasColors ? "   v_col = " + ShaderProgram.COLOR_ATTRIBUTE + ";\n" : "");
    for (int i = 0; i < numTexCoords; i++) {
        shader += "   v_tex" + i + " = " + ShaderProgram.TEXCOORD_ATTRIBUTE + i + ";\n";
    }
    shader += "   gl_PointSize = 1.0;\n";
    shader += "}\n";
    return shader;
}
