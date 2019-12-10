protected int createProgram() {
    GL20 gl = Gdx.gl20;
    int program = gl.glCreateProgram();
    return program != 0 ? program : -1;
}
