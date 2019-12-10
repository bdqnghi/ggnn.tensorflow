private int allocateUniformLocationId(int program, WebGLUniformLocation location) {
    Map<Integer, WebGLUniformLocation> progUniforms = uniforms.get(program);
    if (progUniforms == null) {
        progUniforms = new HashMap<Integer, WebGLUniformLocation>();
        uniforms.put(program, progUniforms);
    }
    // FIXME check if uniform already stored.
    int id = nextUniformId++;
    progUniforms.put(id, location);
    return id;
}
