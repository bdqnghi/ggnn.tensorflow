@Override
public void setShader(ShaderProgram shader) {
    if (drawing) {
        flush();
        if (customShader != null)
            customShader.end();
        else
            this.shader.end();
    }
    customShader = shader;
    if (drawing) {
        if (customShader != null)
            customShader.begin();
        else
            this.shader.begin();
        setupMatrices();
    }
}
