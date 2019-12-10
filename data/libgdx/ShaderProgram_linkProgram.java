private int linkProgram(int program) {
    GL20 gl = Gdx.gl20;
    if (program == -1)
        return -1;
    gl.glAttachShader(program, vertexShaderHandle);
    gl.glAttachShader(program, fragmentShaderHandle);
    gl.glLinkProgram(program);
    ByteBuffer tmp = ByteBuffer.allocateDirect(4);
    tmp.order(ByteOrder.nativeOrder());
    IntBuffer intbuf = tmp.asIntBuffer();
    gl.glGetProgramiv(program, GL20.GL_LINK_STATUS, intbuf);
    int linked = intbuf.get(0);
    if (linked == 0) {
        // Gdx.gl20.glGetProgramiv(program, GL20.GL_INFO_LOG_LENGTH, intbuf);
        // int infoLogLength = intbuf.get(0);
        // if (infoLogLength > 1) {
        log = Gdx.gl20.glGetProgramInfoLog(program);
        // }
        return -1;
    }
    return program;
}
