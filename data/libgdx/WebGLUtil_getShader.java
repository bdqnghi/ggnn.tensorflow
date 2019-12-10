private static WebGLShader getShader(WebGLRenderingContext gl, int shaderType, String source) {
    WebGLShader shader = gl.createShader(shaderType);
    gl.shaderSource(shader, source);
    gl.compileShader(shader);
    if (!gl.getShaderParameterb(shader, COMPILE_STATUS)) {
        throw new RuntimeException(gl.getShaderInfoLog(shader));
    }
    return shader;
}
