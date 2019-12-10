public void debug(String message, Exception exception) {
    if (level >= DEBUG)
        Gdx.app.debug(tag, message, exception);
}
