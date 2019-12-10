private int allocateShaderId(WebGLShader shader) {
    int id = nextShaderId++;
    shaders.put(id, shader);
    return id;
}
