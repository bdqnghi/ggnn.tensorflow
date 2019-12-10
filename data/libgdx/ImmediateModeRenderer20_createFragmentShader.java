static private String createFragmentShader(boolean hasNormals, boolean hasColors, int numTexCoords) {
    String shader = "#ifdef GL_ES\n" + "precision mediump float;\n" + "#endif\n";
    if (hasColors)
        shader += "varying vec4 v_col;\n";
    for (int i = 0; i < numTexCoords; i++) {
        shader += "varying vec2 v_tex" + i + ";\n";
        shader += "uniform sampler2D u_sampler" + i + ";\n";
    }
    shader += "void main() {\n" + "   gl_FragColor = " + (hasColors ? "v_col" : "vec4(1, 1, 1, 1)");
    if (numTexCoords > 0)
        shader += " * ";
    for (int i = 0; i < numTexCoords; i++) {
        if (i == numTexCoords - 1) {
            shader += " texture2D(u_sampler" + i + ",  v_tex" + i + ")";
        } else {
            shader += " texture2D(u_sampler" + i + ",  v_tex" + i + ") *";
        }
    }
    shader += ";\n}";
    return shader;
}
