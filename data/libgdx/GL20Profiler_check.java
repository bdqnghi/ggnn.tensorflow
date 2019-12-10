private void check() {
    int error = gl20.glGetError();
    while (error != GL20.GL_NO_ERROR) {
        listener.onError(error);
        error = gl20.glGetError();
    }
}
