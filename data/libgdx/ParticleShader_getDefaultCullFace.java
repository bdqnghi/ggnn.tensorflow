public int getDefaultCullFace() {
    return config.defaultCullFace == -1 ? GL20.GL_BACK : config.defaultCullFace;
}
