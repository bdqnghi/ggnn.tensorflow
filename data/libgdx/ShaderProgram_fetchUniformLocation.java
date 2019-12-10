public int fetchUniformLocation(String name, boolean pedantic) {
    GL20 gl = Gdx.gl20;
    // -2 == not yet cached
    // -1 == cached but not found
    int location;
    if ((location = uniforms.get(name, -2)) == -2) {
        location = gl.glGetUniformLocation(program, name);
        if (location == -1 && pedantic)
            throw new IllegalArgumentException("no uniform with name '" + name + "' in shader");
        uniforms.put(name, location);
    }
    return location;
}
