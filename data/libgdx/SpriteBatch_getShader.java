@Override
public ShaderProgram getShader() {
    if (customShader == null) {
        return shader;
    }
    return customShader;
}
