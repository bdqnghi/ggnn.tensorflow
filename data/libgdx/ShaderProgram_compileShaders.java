/**
 * Loads and compiles the shaders, creates a new program and links the shaders.
 *
 * @param vertexShader
 * @param fragmentShader
 */
private void compileShaders(String vertexShader, String fragmentShader) {
    vertexShaderHandle = loadShader(GL20.GL_VERTEX_SHADER, vertexShader);
    fragmentShaderHandle = loadShader(GL20.GL_FRAGMENT_SHADER, fragmentShader);
    if (vertexShaderHandle == -1 || fragmentShaderHandle == -1) {
        isCompiled = false;
        return;
    }
    program = linkProgram(createProgram());
    if (program == -1) {
        isCompiled = false;
        return;
    }
    isCompiled = true;
}
