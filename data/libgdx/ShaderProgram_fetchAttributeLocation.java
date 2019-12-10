private int fetchAttributeLocation(String name) {
    GL20 gl = Gdx.gl20;
    // -2 == not yet cached
    // -1 == cached but not found
    int location;
    if ((location = attributes.get(name, -2)) == -2) {
        location = gl.glGetAttribLocation(program, name);
        attributes.put(name, location);
    }
    return location;
}
