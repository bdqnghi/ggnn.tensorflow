public int getDefaultDepthFunc() {
    return config.defaultDepthFunc == -1 ? GL20.GL_LEQUAL : config.defaultDepthFunc;
}
