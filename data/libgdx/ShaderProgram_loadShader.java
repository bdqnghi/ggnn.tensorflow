private int loadShader(int type, String source) {
    GL20 gl = Gdx.gl20;
    IntBuffer intbuf = BufferUtils.newIntBuffer(1);
    int shader = gl.glCreateShader(type);
    if (shader == 0)
        return -1;
    gl.glShaderSource(shader, source);
    gl.glCompileShader(shader);
    gl.glGetShaderiv(shader, GL20.GL_COMPILE_STATUS, intbuf);
    int compiled = intbuf.get(0);
    if (compiled == 0) {
        // gl.glGetShaderiv(shader, GL20.GL_INFO_LOG_LENGTH, intbuf);
        // int infoLogLength = intbuf.get(0);
        // if (infoLogLength > 1) {
        String infoLog = gl.glGetShaderInfoLog(shader);
        log += infoLog;
        // }
        return -1;
    }
    return shader;
}
