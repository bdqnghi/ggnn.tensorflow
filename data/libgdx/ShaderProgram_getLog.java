/**
 * @return the log info for the shader compilation and program linking stage. The shader needs to be bound for this method to
 *         have an effect.
 */
public String getLog() {
    if (isCompiled) {
        // Gdx.gl20.glGetProgramiv(program, GL20.GL_INFO_LOG_LENGTH, intbuf);
        // int infoLogLength = intbuf.get(0);
        // if (infoLogLength > 1) {
        log = Gdx.gl20.glGetProgramInfoLog(program);
        // }
        return log;
    } else {
        return log;
    }
}
