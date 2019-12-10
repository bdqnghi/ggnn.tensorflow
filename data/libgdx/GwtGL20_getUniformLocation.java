private WebGLUniformLocation getUniformLocation(int location) {
    return uniforms.get(currProgram).get(location);
}
