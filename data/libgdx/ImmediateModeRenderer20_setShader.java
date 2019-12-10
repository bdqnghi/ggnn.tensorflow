public void setShader(ShaderProgram shader) {
    if (ownsShader)
        this.shader.dispose();
    this.shader = shader;
    ownsShader = false;
}
