public static WebGLProgram createShaderProgram(WebGLRenderingContext gl, String vertexSource, String fragmentSource) {
    WebGLShader vertexShader = getShader(gl, VERTEX_SHADER, vertexSource);
    WebGLShader fragmentShader = getShader(gl, FRAGMENT_SHADER, fragmentSource);
    WebGLProgram shaderProgram = gl.createProgram();
    gl.attachShader(shaderProgram, fragmentShader);
    gl.attachShader(shaderProgram, vertexShader);
    gl.linkProgram(shaderProgram);
    if (!gl.getProgramParameterb(shaderProgram, LINK_STATUS)) {
        throw new RuntimeException("Could not initialize shaders");
    }
    return shaderProgram;
}
