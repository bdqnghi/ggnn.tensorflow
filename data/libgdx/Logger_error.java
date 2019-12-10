public void error(String message, Throwable exception) {
    if (level >= ERROR)
        Gdx.app.error(tag, message, exception);
}
