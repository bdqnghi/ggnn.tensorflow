private void fetchAttributes() {
    params.clear();
    Gdx.gl20.glGetProgramiv(program, GL20.GL_ACTIVE_ATTRIBUTES, params);
    int numAttributes = params.get(0);
    attributeNames = new String[numAttributes];
    for (int i = 0; i < numAttributes; i++) {
        params.clear();
        params.put(0, 1);
        type.clear();
        String name = Gdx.gl20.glGetActiveAttrib(program, i, params, type);
        int location = Gdx.gl20.glGetAttribLocation(program, name);
        attributes.put(name, location);
        attributeTypes.put(name, type.get(0));
        attributeSizes.put(name, params.get(0));
        attributeNames[i] = name;
    }
}
