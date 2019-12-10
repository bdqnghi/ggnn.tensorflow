/**
 * Returns a new instance of the default shader used by SpriteBatch for GL2 when no shader is specified.
 */
static public ShaderProgram createDefaultShader(boolean hasNormals, boolean hasColors, int numTexCoords) {
    String vertexShader = createVertexShader(hasNormals, hasColors, numTexCoords);
    String fragmentShader = createFragmentShader(hasNormals, hasColors, numTexCoords);
    ShaderProgram program = new ShaderProgram(vertexShader, fragmentShader);
    return program;
}
