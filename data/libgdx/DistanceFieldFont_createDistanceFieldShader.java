/**
 * Returns a new instance of the distance field shader, see https://github.com/libgdx/libgdx/wiki/Distance-field-fonts if the
 * u_smoothing uniform > 0.0. Otherwise the same code as the default SpriteBatch shader is used.
 */
static public ShaderProgram createDistanceFieldShader() {
    String vertexShader = // 
    "attribute vec4 " + ShaderProgram.POSITION_ATTRIBUTE + ";\n" + "attribute vec4 " + ShaderProgram.COLOR_ATTRIBUTE + // 
    ";\n" + "attribute vec2 " + ShaderProgram.TEXCOORD_ATTRIBUTE + // 
    "0;\n" + // 
    "uniform mat4 u_projTrans;\n" + // 
    "varying vec4 v_color;\n" + // 
    "varying vec2 v_texCoords;\n" + // 
    "\n" + // 
    "void main() {\n" + "	v_color = " + ShaderProgram.COLOR_ATTRIBUTE + // 
    ";\n" + // 
    "	v_color.a = v_color.a * (255.0/254.0);\n" + "	v_texCoords = " + ShaderProgram.TEXCOORD_ATTRIBUTE + // 
    "0;\n" + "	gl_Position =  u_projTrans * " + ShaderProgram.POSITION_ATTRIBUTE + // 
    ";\n" + "}\n";
    String fragmentShader = // 
    "#ifdef GL_ES\n" + // 
    "	precision mediump float;\n" + // 
    "	precision mediump int;\n" + // 
    "#endif\n" + // 
    "\n" + // 
    "uniform sampler2D u_texture;\n" + // 
    "uniform float u_smoothing;\n" + // 
    "varying vec4 v_color;\n" + // 
    "varying vec2 v_texCoords;\n" + // 
    "\n" + // 
    "void main() {\n" + // 
    "	if (u_smoothing > 0.0) {\n" + // 
    "		float smoothing = 0.25 / u_smoothing;\n" + // 
    "		float distance = texture2D(u_texture, v_texCoords).a;\n" + // 
    "		float alpha = smoothstep(0.5 - smoothing, 0.5 + smoothing, distance);\n" + // 
    "		gl_FragColor = vec4(v_color.rgb, alpha * v_color.a);\n" + // 
    "	} else {\n" + // 
    "		gl_FragColor = v_color * texture2D(u_texture, v_texCoords);\n" + // 
    "	}\n" + "}\n";
    ShaderProgram shader = new ShaderProgram(vertexShader, fragmentShader);
    if (shader.isCompiled() == false)
        throw new IllegalArgumentException("Error compiling distance field shader: " + shader.getLog());
    return shader;
}
