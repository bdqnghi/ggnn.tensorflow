public boolean isMipMap() {
    return glEnum != GL20.GL_NEAREST && glEnum != GL20.GL_LINEAR;
}
