private void fetchUniforms() {
    params.clear();
    Gdx.gl20.glGetProgramiv(program, GL20.GL_ACTIVE_UNIFORMS, params);
    int numUniforms = params.get(0);
    uniformNames = new String[numUniforms];
    for (int i = 0; i < numUniforms; i++) {
        params.clear();
        params.put(0, 1);
        type.clear();
        String name = Gdx.gl20.glGetActiveUniform(program, i, params, type);
        int location = Gdx.gl20.glGetUniformLocation(program, name);
        uniforms.put(name, location);
        uniformTypes.put(name, type.get(0));
        uniformSizes.put(name, params.get(0));
        uniformNames[i] = name;
    }
}
